/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:35:24 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/26 20:28:36 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*or_dest;
	int		src_len;

	src_len = ft_strlen (src);
	dest = (char *)malloc (src_len * sizeof(char));
	or_dest = dest;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		return (or_dest);
	}
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = strdup("hello");
	str2 = ft_strdup("hello");
	printf ("strdup: %s\n", str1);
	printf ("my_strdup: %s\n", str2);
	free (str1);
	free (str2);
	return (0);
}*/
