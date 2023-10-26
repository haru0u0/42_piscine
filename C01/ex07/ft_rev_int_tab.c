/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:05:29 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/08 18:03:12 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int h;
	int *tab_orgnl;

	tab_orgnl=tab;

	printf("original:");
	for(h = 0; h < size; h++)
	{
		printf("%d",*tab_orgnl);
		tab_orgnl++;
	}

	printf("\n");

	int	tmp;
	int	*exc1;
	int	*exc2;
	int	f;
	f = 0;
	exc1 = tab;

	while(f < size/2)
	{
	exc2 = tab + size - 1 - f;
	tmp = *exc1;
	*exc1 = *exc2;
	*exc2 = tmp;
	exc1++;
	f++;
	}

	int g;
	tab_orgnl=tab;

        printf("swaped:");
        for(g = 0; g < size; g++)
        {
                printf("%d",*tab_orgnl);
                tab_orgnl++;
	}

}

int	main(void)
{
	int arr[5];
	arr[0]=1;
	arr[1]=2;
	arr[2]=3;
	arr[3]=4;
	arr[4]=5;
	ft_rev_int_tab(&arr[0], 5);
	return(0);
}
