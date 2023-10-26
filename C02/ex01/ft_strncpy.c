/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:43:39 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/14 17:56:06 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*src_flg;
	char			*dest_flg;
	unsigned int	cnt;

	cnt = 0;
	dest_flg = dest;
	src_flg = src;
	while (*src_flg != '\0' && cnt < n)
	{
		*dest_flg = *src_flg;
		src_flg++;
		dest_flg++;
		cnt++;
	}
	if (cnt < n)
	{
		while (cnt < n)
		{
			*dest_flg = '\0';
			dest_flg++;
			cnt++;
		}
	}
	return (dest);
}
