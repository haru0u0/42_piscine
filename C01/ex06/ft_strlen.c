/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:38:49 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/07 22:04:39 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int strlen;
	strlen=0;
	while(*str!='\0')
	{
		strlen++;
		str++;
	}
	return(strlen);
}

int	main(void)
{
	char str[3];
	int strlen;
	str[0]='a';
	str[1]='b';
	str[2]='c';
	strlen=ft_strlen(&str[0]);
	printf("%d",strlen);
	return(0);
}
