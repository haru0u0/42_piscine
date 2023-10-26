/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:04:17 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/15 22:04:33 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	char	*d_f;
	char	*s_f;

	d_f = dest;
	s_f = src;
	while (*d_f != '\0')
	{
		d_f++;
	}
	while (*s_f != '\0')
	{
		*d_f = *s_f;
		s_f++;
		d_f++;
	}
	*d_f = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	str1[]="Hello";
	char	str2[]=" World";

	printf("%s", ft_strcat(str1, str2));
	return(0);
}
*/
