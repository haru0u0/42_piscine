/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:27:18 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/19 14:33:53 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	short_dest(unsigned int size, char *src)
{
	unsigned int	cnt;

	cnt = 0;
	while (size > 0)
	{
		size--;
		cnt++;
	}
	while (*src != '\0')
	{
		src++;
		cnt++;
	}
	return (cnt);
}

unsigned int	long_dest(unsigned int cnt,
		unsigned int size, char *dest, char *src)
{
	while (*src != '\0' && size - 1 > cnt)
	{
		*dest = *src;
		dest++;
		src++;
		cnt++;
	}
	while (*src != '\0')
	{
		src++;
		cnt++;
	}
	*dest = '\0';
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	while (*dest != '\0')
	{
		dest++;
		cnt++;
	}
	if (cnt >= size)
	{
		cnt = short_dest (size, src);
	}
	else if (size > cnt)
	{
		cnt = long_dest (cnt, size, dest, src);
	}
	return (cnt);
}

/*
int	main(int	argc, char	*argv[])
{
	char	str3[20] = "Hello,";
	char	str4[] = "me";
	char	str5[20] = "Hello,";
	char	str6[] = "me";

	int	strl_rtn;
	int	ft_strl_rtn;
	(void)argc;

	strl_rtn = strlcat (str3, str4, atoi(argv[1]));
	ft_strl_rtn = ft_strlcat (str5, str6, atoi(argv[1]));

	printf ("strl: %s\n", str3);
	printf ("strl_return: %d\n", strl_rtn);
	
	printf ("my_strl: %s\n", str5);
	printf ("my_strl_return: %d\n", ft_strl_rtn);

	return (0);
}
*/
