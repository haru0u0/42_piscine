/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:06:19 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/15 22:06:29 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*d_f;
	char			*s_f;
	unsigned int	n;

	n = 0;
	d_f = dest;
	s_f = src;
	while (*d_f != '\0')
	{
		d_f++;
	}
	while (*s_f != '\0' && n < nb)
	{
		*d_f = *s_f;
		s_f++;
		d_f++;
		n++;
	}
	*d_f = '\0';
	return (dest);
}

/*
int	main(void)
{
	char			str1[]="Hello";
	char			str2[]=" World";
	char	*res;
	int	len;
	res = ft_strncat(str1, str2, 12);
	len = strlen(res);

	printf("%s\n", res);
	printf("%d\n", len);

	return(0);
}
*/
