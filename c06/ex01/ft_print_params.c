/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:35:24 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/20 19:18:28 by gcherqui         ###   ########.fr       */
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

	i = 1;
	while (i < argc)
	{
		ft_display(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}
