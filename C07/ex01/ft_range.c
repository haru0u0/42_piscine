/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 00:29:55 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/26 20:27:29 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*or_arr;
	int	len;
	int	nb;

	len = 0;
	nb = min;
	if (min >= max)
		return (NULL);
	while (nb < max)
	{
		len++;
		nb++;
	}
	arr = (int *)malloc(len * sizeof(int));
	or_arr = arr;
	nb = min;
	while (nb < max)
	{
		*arr = nb;
		arr++;
		nb++;
	}
	return (or_arr);
}

/*
int	main(int argc, char **argv)
{
	int	*arr;
	int	len;
	int	min;
	int	max;
	int	dx;

	(void)argc;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	len = 0;
	dx = 0;
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (min < max)
	{
		len++;
		min++;
	}
	while (len > dx)
	{
		printf ("%d", arr[dx]);
		dx++;
	}
	return (0);
}*/
