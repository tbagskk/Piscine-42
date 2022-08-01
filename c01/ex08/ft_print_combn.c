/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:29:33 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/15 23:42:07 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *tab, int i1)
{
	int	temp;

	temp = tab[i1];
	tab[i1] = tab[i1 + 1];
	tab[i1 + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (count < size - 1)
	{
		while (index < size - count - 1)
		{
			if (tab[index] > tab[index + 1])
				swap(tab, index);
			index++;
		}
		index = 0;
		count++;
	}
}
