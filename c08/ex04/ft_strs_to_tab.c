/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:51:24 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/26 23:24:47 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

char	*ft_tab(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i])
			i++;
	tab = malloc((sizeof(char) * i + 1));
	if (!(tab))
		return (0);
	i = 0;
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab2;

	i = 0;
	tab2 = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if ((!tab2))
		return (0);
	while (i < ac)
	{
		tab2[i].size = ft_strlen(av[i]);
		tab2[i].str = av[i];
		tab2[i].copy = ft_tab(tab2[i].str);
		i++;
	}
	tab2[i].str = 0;
	return (tab2);
}
