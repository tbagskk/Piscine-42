/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:19:47 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/20 19:25:29 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write (1, &tab[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{	
	int	i;
	int	a;

	i = 1;
	a = (argc - 1);
	while (i < argc)
	{
		ft_display(argv[a]);
		write (1, "\n", 1);
		i++;
		a--;
	}
}
