/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 01:39:04 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/26 20:24:04 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_copy(int **range, int min, int max)
{
	int	nb;
	int	dx;
	int	len;

	len = max - min;
	dx = 0;
	nb = 0;
	if (*range == NULL)
	{
		return (-1);
	}
	else
	{
		nb = min;
		while (nb < max)
		{
			(*range)[dx] = nb;
			dx++;
			nb++;
		}
		return (len);
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	dx;

	len = 0;
	dx = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(len * sizeof(int));
	return (ft_copy(range, min, max));
}

/*
int	main(int argc, char **argv)
{
	int	*range;
	int	len;
	int	min;
	int	max;
	int	dx;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	len = max - min;
	dx = 0;
	len = ft_ultimate_range (&range, min, max);
	printf ("%d\n", len);
	while (dx < len)
	{
		printf("%d", range[dx]);
		dx++;
	}
	return (0);
}*/
