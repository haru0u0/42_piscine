#include <stdio.h>

void    ft_ft(int *nbr){
        *nbr = 42;
        printf("%d", *nbr); 	
}

int     main(void)
{
	int num;
        ft_ft(&num);
        return 0;
}
