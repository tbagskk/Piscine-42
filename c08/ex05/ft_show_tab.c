/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:18:41 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/26 23:17:19 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		write(1, &tab[i++], 1);
}

void	ft_putnbr(int nb)
{
	int		a;
	char	b;

	a = nb;
	if (a < 0)
	{
		a *= 1;
		write(1, "-", 1);
	}
	if (a > 9)
		ft_putnbr(a / 10);
	b = (char)(a % 10) + '0';
	write(1, &b, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
