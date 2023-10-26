/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:24:52 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/11 16:53:17 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*src_flg;
	char	*dest_flg;

	dest_flg = dest;
	src_flg = src;
	while (*src_flg != '\0')
	{
		*dest_flg = *src_flg;
		src_flg++;
		dest_flg++;
	}
	*dest_flg = '\0';
	return (dest);
}
