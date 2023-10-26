/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:51:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/07 13:12:26 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int store_a;
	int store_b;

	store_a = *a;
	store_b = *b;

	*a = store_b;
	*b = store_a;
}

int	main(void)
{
	int a;
	int b;
	a=1;
	b=2;
	printf("%d%d",a,b);
	ft_swap(&a,&b);
	printf("%d%d",a,b);
	return(0);
}
