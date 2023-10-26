/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:07:21 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/19 14:57:59 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s\n", strstr(argv[1], argv[2]));
	return (0);
}
*/
