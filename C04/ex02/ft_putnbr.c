/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:08:51 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/20 21:05:02 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write (1, &"-2147483648", 11);
			return ;
		}
		else
		{
			write (1, &"-", 1);
			nb = nb * -1;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
/*
int	main (int argc, char *argv[])
{
	(void)argc;
	ft_putnbr (atoi(argv[1]));
	return(0);
}
*/
