/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:04:00 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/14 17:57:31 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	capitalize_first(char *str)
{
	if (97 <= *str && *str <= 122)
	{
		*str = *str - 32;
	}
}

void	capitalize_other(char *str)
{
	char	*f;
	char	*nxt_f;

	f = str;
	nxt_f = f + 1;
	while (*nxt_f != '\0')
	{
		if (*f <= 47 || (58 <= *f && *f <= 64)
			|| (91 <= *f && *f <= 96) || 123 <= *f)
		{
			if (97 <= *nxt_f && *nxt_f <= 122)
			{
				*nxt_f = *nxt_f - 32;
			}
		}
		f++;
		nxt_f++;
	}
}

void	lowercase(char *str)
{
	char	*f;

	f = str;
	while (*f != '\0')
	{
		if (65 <= *f && *f <= 90)
		{
			*f = *f + 32;
		}
		f++;
	}
}

char	*ft_strcapitalize(char *str)
{
	lowercase (str);
	capitalize_first (str);
	capitalize_other (str);
	return (str);
}
