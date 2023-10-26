/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:04:24 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/08 19:54:38 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
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
	//-------------------------
	
	int     tmp;
        int     *exc1;
        int     *exc2;
	int	exc_times;
	//int	flg;
	exc_times = 1;

	while(exc_times!=0){
		exc_times = 0;
		//flg = 0;
		exc1 = tab;
		exc2 = tab + 1;
		while(exc2 < tab+size)
		{
			if (*exc1>*exc2)
			{
				tmp = *exc1;
				*exc1 = *exc2;
				*exc2 = tmp;
				exc_times++;
			}
			exc1++;
			exc2++;
			//flg++;
		}
	}


	//--------------------------

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
        arr[0]=8;
        arr[1]=3;
        arr[2]=2;
        arr[3]=0;
        arr[4]=5;
        ft_sort_int_tab(&arr[0], 5);
        return(0);
}
