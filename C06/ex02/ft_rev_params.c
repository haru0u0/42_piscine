/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:18:42 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/23 13:31:53 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt;

	cnt = argc - 1;
	while (cnt > 0)
	{
		while (*argv[cnt] != '\0')
		{
			write (1, argv[cnt], 1);
			argv[cnt]++;
		}
		cnt--;
		write (1, &"\n", 1);
	}
	return (0);
}
