/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:19:19 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/08 23:17:24 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	middle(int str_x, int x)
{
	x = x - 1;
	while (str_x <= x)
	{
		if (str_x != 0 && str_x != x)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
		str_x++;
	}
}

void	firstlast(int str_x, int x)
{
	x = x - 1;
	while (str_x <= x)
	{
		if (str_x == 0)
		{
			ft_putchar('A');
		}
		if (str_x != x && str_x != 0)
		{
			ft_putchar('B');
		}
		if (str_x == x && str_x > 1)
		{
			ft_putchar('C');
		}
		str_x++;
	}
}

void	rush(int x, int y)
{
	int	str_x;
	int	str_y;

	y = y - 1;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('E');
		ft_putchar('R');
		ft_putchar('R');
	}
	else
	{
		str_y = 0;
		while (str_y <= y)
		{
			str_x = 0;
			if (str_y != 0 && str_y != y)
				middle (0, x);
			else
				firstlast (0, x);
			ft_putchar('\n');
			str_y++;
		}
	}
}
