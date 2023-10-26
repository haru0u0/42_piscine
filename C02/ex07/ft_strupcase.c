/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:41:45 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/11 20:08:31 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	char	*str_flg;

	str_flg = str;
	while (*str_flg != '\0')
	{
		if (97 <= *str_flg && *str_flg <= 122)
		{
			*str_flg = *str_flg - 32;
		}
		str_flg++;
	}
	return (str);
}
