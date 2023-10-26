/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:03:16 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/19 14:53:53 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while ((*s1 != '\0' || *s2 != '\0') && cnt < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		cnt++;
	}
	return (0);
}
/*
int	main(int argc, char	*argv[])
{
	(void)argc;
	printf ("%d",ft_strncmp (argv[1], argv[2], 3));
}
*/
