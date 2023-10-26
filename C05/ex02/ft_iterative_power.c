/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:48:31 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/25 23:39:24 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	cnt;
	int	res;

	cnt = 0;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > cnt)
	{
		res = res * nb;
		cnt++;
	}
	return (res);
}

/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
	return (0);
}
*/
