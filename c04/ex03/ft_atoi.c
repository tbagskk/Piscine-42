/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:28:57 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/20 13:44:03 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr(int tab)
{
	if (tab >= '0' && tab <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
				sign *= -1;
		i++;
	}
	while (nbr(str[i]))
	{
			result = result * 10 + str[i] - '0';
			i++;
	}
	return (result * sign);
}
