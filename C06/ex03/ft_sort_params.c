/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:27:36 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/24 15:44:10 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int argc, char **argv)
{
	int	adx;
	int	wdx;

	adx = 1;
	wdx = 0;
	while (adx < argc)
	{
		wdx = 0;
		while (argv[adx][wdx] != '\0')
		{
			write(1, &argv[adx][wdx], 1);
			wdx++;
		}
		write(1, &"\n", 1);
		adx++;
	}
}

int	ft_exchange(char **argv, int adx, char **temp)
{
	temp[0] = argv[adx];
	argv[adx] = argv[adx + 1];
	argv[adx + 1] = temp[0];
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**or_argv;
	int		adx;
	int		exc;
	char	**temp;

	or_argv = argv;
	temp = argv;
	exc = 1;
	while (exc != 0)
	{
		exc = 0;
		adx = 1;
		while (adx < argc - 1)
		{
			if (ft_strcmp (argv[adx], argv[adx + 1]) > 0)
			{
				exc = ft_exchange (argv, adx, temp);
			}
			adx++;
		}
	}
	ft_print (argc, or_argv);
	return (0);
}
