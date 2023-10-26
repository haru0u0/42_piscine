/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 03:37:20 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/26 20:24:39 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_putsep(char *res, int rdx, char *sep)
{
	int	sdx;

	sdx = 0;
	while (sep[sdx] != '\0')
	{
		res[rdx] = sep[sdx];
		rdx++;
		sdx++;
	}
	return (rdx);
}

int	ft_sep_wcount(char *sep)
{
	int	sdx;
	int	sep_wcount;

	sdx = 0;
	sep_wcount = 0;
	while (sep[sdx] != '\0')
	{
		sep_wcount++;
		sdx++;
	}
	return (sep_wcount);
}

int	ft_str_wcount(char **strs, int size)
{
	int	str_wcount;
	int	adx;
	int	wdx;

	str_wcount = 0;
	adx = 0;
	wdx = 0;
	while (adx < size)
	{
		wdx = 0;
		while (strs[adx][wdx] != '\0')
		{
			str_wcount++;
			wdx++;
		}
		adx++;
	}
	return (str_wcount);
}

void	ft_join(int size, char **strs, char *sep, char *res)
{
	int	adx;
	int	rdx;
	int	sdx;
	int	wdx;

	adx = 0;
	rdx = 0;
	sdx = 0;
	if (res != NULL)
	{
		while (adx < size)
		{
			wdx = 0;
			while (strs[adx][wdx] != '\0')
			{
				res[rdx] = strs[adx][wdx];
				wdx++;
				rdx++;
			}
			if (adx != size -1)
				rdx = ft_putsep (res, rdx, sep);
			adx++;
		}
	}
	res[rdx] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		str_wcount;
	int		sep_wcount;

	if (size == 0)
	{
		return ("");
	}
	else
	{
		str_wcount = ft_str_wcount (strs, size);
		sep_wcount = ft_sep_wcount (sep);
		res = (char *)malloc
			((str_wcount + (sep_wcount * (size - 1))) * sizeof(char));
		ft_join (size, strs, sep, res);
		return (res);
	}
}
/*
int	main(int argc, char **argv)
{
	char	*strs[3];
	char	*sep;
	char	*res;

	strs[0] = strdup ("hello");
	strs[1] = strdup ("good morning");
	strs[2] = strdup ("good night");
	sep = strdup(" | I LIKE APPLE | ");
	res = ft_strjoin (3, strs, sep);
	printf("%s", res);
	free(res);
	return (0);
}*/
