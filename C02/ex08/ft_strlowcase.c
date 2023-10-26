/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:05:56 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/11 20:12:48 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	char	*str_flg;

	str_flg = str;
	while (*str_flg != '\0')
	{
		if (65 <= *str_flg && *str_flg <= 90)
		{
			*str_flg = *str_flg + 32;
		}
		str_flg++;
	}
	return (str);
}
