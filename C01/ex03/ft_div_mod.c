/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:30:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/07 13:42:39 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
	printf("%d%d", *div, *mod);
}

int	main()
{
	int c;
	int d;
	c=8;
	d=9;
	ft_div_mod(4,2,&c,&d);
	return(0);
}
