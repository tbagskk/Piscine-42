/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:31:46 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/19 21:56:52 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		value *= nb;
		i++;
	}
	return (value);
}
