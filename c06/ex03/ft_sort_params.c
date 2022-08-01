/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:48:05 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/24 15:06:52 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *s1[], char *s2[])
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

void	ft_putstr(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	while (i < argc)
	{
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				ft_swap(&argv[a], &argv[a + 1]);
			}
			a++;
		}
		i++;
		a = 1;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
