/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:46:33 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/14 13:46:45 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{	
	long	lnb;
	char	temp;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	if (lnb > 9)
		ft_putnbr(lnb / 10);
	temp = '0' + (char)(lnb % 10);
	write(1, &temp, 1);
}
