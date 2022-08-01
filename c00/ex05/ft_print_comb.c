/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:24:46 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/14 11:55:05 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(int aa, int bb, int cc)
{
	int	d;

	ft_putchar(aa);
	ft_putchar(bb);
	ft_putchar(cc);
	d = aa + bb + cc;
	if (d < 168)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	c = 48;
	while (a < 58)
	{	
		b = a + 1;
		while (b < 58)
		{	
			c = b + 1;
			while (c < 58)
			{
				ft_putchar_multiple(a, b, c);
				c++;
			}	
			b++;
		}
		a++;
	}
}
