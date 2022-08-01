/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:41:35 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/14 11:48:53 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (a < 98)
			write(1, ", ", 2);
		if (++b > 99)
			b = ++a + 1;
	}
}
