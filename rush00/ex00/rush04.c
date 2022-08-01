/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:04:12 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/17 21:04:15 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	verif(int line, int column, int a, int b)
{
	if ((line == 0 && column == 0)
		|| (line == b - 1 && column == a - 1
			&& line != 0 && column != 0))
		ft_putchar('A');
	else if ((line == 0 && column == a - 1)
		|| (line == b - 1 && column == 0))
		ft_putchar('C');
	else if (line == 0 || line == b - 1
		|| column == 0 || column == a -1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	while (line < y)
	{	
		while (column < x)
		{
			verif(line, column, x, y);
			column++;
		}
		ft_putchar('\n');
		column = 0;
		line++;
	}
}
