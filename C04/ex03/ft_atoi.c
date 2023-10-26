/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:20:08 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/20 21:05:32 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	neg_flg;

	res = 0;
	neg_flg = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg_flg = neg_flg * -1;
		}
		str++;
	}
	while (*str != '\0' && '0' <= *str && *str <= '9')
	{
		res = (res * 10) + *str - '0';
		str++;
	}
	res = res * neg_flg;
	return (res);
}

/*
int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi (argv[1]));
	return (0);
}
*/
