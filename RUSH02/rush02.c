/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 23:03:41 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/22 23:30:14 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ttllen(int file)
{
	int		len;
	char	buf[1];

	len = 0;
	buf[0] = 'c';
	while (read(file, buf, 1) != 0)
	{
		len++;
	}
	return (len);
}

int	ft_strrow(int file)
{
	int		row;
	char	buf[1];
	int		i;
	int		islabel;

	row = 0;
	islabel = 1;
	while (read(file, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			row++;
			islabel = 1;
		}
	}
	return (row);
}

int		ft_strlen_l(int file)
{
	int		currentlen;
	int		maxlen;
	char	buf[1];
	int		i;
	int		islabel;
	int		j;

	j = 0;
	currentlen = 0;
	maxlen = 0;
	islabel = 1;
	while (read(file, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			i++;
			isLabel = 1;
		}
		else if (buf[0] == ':')
		{
			if (currentlen > maxlen)
			{
				maxlen = currentlen;
			}
			currentlen = 0;
			islabel = 0;
		}
		else
		{
			if (isLabel == 1)
			{
				currentlen++;
			}
		}
	}
	return (maxlen);
}

int		ft_strlen_v (int file)
{
	int		currentlen;
	int		maxlen;
	char	buf[1];
	int		i;
	int		isLabel;

	isLabel = 1;
	currentlen = 0;
	maxlen = 0;
	while (read(file, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			if (currentlen > maxlen)
			{
				maxlen = currentlen;
			}
			currentlen = 0;
			isLabel = 1;
		}
		else if (buf[0] == ':')
		{
			isLabel = 0;
		}
		else
		{
			if (isLabel == 0)
			{
				currentlen++;
			}
		}
	}
	return (maxlen);
}

int	str_check(char *cur_str, char *to_find)
{
	char	*ptr_cur_str;
	char	*ptr_to_find;

	ptr_cur_str = cur_str;
	ptr_to_find = to_find;
	while (*ptr_to_find != '\0')
	{
		if (*ptr_cur_str == *ptr_to_find)
		{
			ptr_cur_str++;
			ptr_to_find++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*to_find == *str)
		{
			if (str_check (str, to_find) == 1)
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}

int	main(int	argc, char	*argv[])
{
	int		file;
	int		ttllen;
	char	*all;
	char	*all_clone;
	int		size;
	int		row;
	int		l_len;
	int		v_len;
	int		l_index;
	int		v_index;
	int		l_index_1;
	int		l_index_2;
	int		v_index_1;
	int		v_index_2;
	int		index_1;
	int		index_2;
	char	**label;
	char	**value;
	int		i;
	int		j;
	int 	isLabel;

	l_index = 0;
	v_index = 0;
	l_index_1 = 0;
	l_index_2 = 0;
	i = 0;
	j = 0;
	isLabel = 1;
	all_clone = all;
	file = open("numbers.dict", O_RDONLY);
	ttllen = ft_ttllen(file);
	file = open("numbers.dict", O_RDONLY);
	all = (char *)malloc((ttllen + 1) * sizeof(char));
	size = read(file, all, ttllen);
	all[size] = '\0';
	file = open("numbers.dict", O_RDONLY);
	row = ft_strrow (file);
	file = open("numbers.dict", O_RDONLY);
	l_len = ft_strlen_l (file);
	file = open("numbers.dict", O_RDONLY);
	v_len = ft_strlen_v (file);
	label = (char **)malloc(row * sizeof(char *));
	value = (char **)malloc(row * sizeof(char *));
	while (l_index < row)
	{
		label[l_index] = (char *)malloc((l_len + 10) * sizeof(char));
		l_index++;
	}
	while (v_index < row)
	{
		value[v_index] = (char *)malloc((v_len + 10) * sizeof(char));
		v_index++;
	}
	index_1 = 0;
	index_2 = 0;
	while (*all != '\0')
	{
		if (*all == '\n')
		{
			value[index_1][index_2] = '\0';
			index_1++;
			index_2 = 0;
			isLabel = 1;
			
		}
		else if (*all == ':')
		{
			label[index_1][index_2] = '\0';
			index_2 = 0;
			isLabel = 0;
			all++;
		}
		else
		{
			if (isLabel == 1)
			{
				label[index_1][index_2] = *all;
				index_2++;
			}
			else
			{
				value[index_1][index_2] = *all;
				index_2++;
			}
		}
		all++;
	}
	l_index_1 = 0;
	while (l_index_1 < row)
	{
		if (ft_strstr(argv[1], label[l_index_1]) != NULL)
		{
			printf("%s", value[l_index_1]);
		}
		l_index_1++;
	}
	close(file);
	for (int e = 0; e < row; e++)
	{
		free(label[e]);
		free(value[e]);
	}
	free(label);
	free(value);
	return (0);
}

