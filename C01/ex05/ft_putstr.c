/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:01:46 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/10/07 21:36:50 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char	*str)
{
	int flg;
	flg=0;
	while(flg==0)
	{
		if(*str!='\0')
		{
			write(1, &str[0], 1);
			str++;
		}
		else
		{
			flg=1;
		}
	}

}

int	main(void)
{
	char	str[3];
	str[0]='a';
	str[1]='b';
	str[2]='\0';
	ft_putstr(&str[0]);
	return(0);
}
