/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:59:05 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/07 14:00:21 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
        int a_v;
        int b_v;
        a_v=*a;
        b_v=*b;
        *a=a_v/b_v;
        *b=a_v%b_v;
}

int main(void)
{
        return(0);
}         
