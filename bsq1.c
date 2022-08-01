/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:12:08 by gcherqui          #+#    #+#             */
/*   Updated: 2022/08/01 23:12:09 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**tableau(void)
{
	char	**tab;
	char	**tab2;
	tab = malloc(9 * sizeof(char *));
	tab2 = malloc(9 * sizeof(char *));

	tab[0] = ".......o....o.....";
	tab[1] = "...o...o...o.....o";
	tab[2] = "oo............o...";
	tab[3] = ".....o.....o......";
	tab[4] = ".....o.o.o.......o";
	tab[5] = "........o.....o...";
	tab[6] = "o.....o..o..oo....";
	tab[7] = "o.................";
	tab[8] = ".o............o...";

	tab2[0] = "...........................";
	tab2[1] = "....o......................";
	tab2[2] = "............o..............";
	tab2[3] = "...........................";
	tab2[4] = "....o......................";
	tab2[5] = "...............o...........";
	tab2[6] = "...........................";
	tab2[7] = "......o..............o.....";
	tab2[8] = "..o.......o................";
	return (tab);
}

int	condition(int a, int b, int c)
{
	int	min;

	min = 0;
	if (a > b)
		min = b;
	else
		min = a;
	if (min > c)
		min = c;
	return (min + 1);
}

int	*first_ligne(char **tab, int h, int l)
{
	int		i;
	int		*change;

	i = 0;
	change = NULL;
	change = malloc((l + 1) * sizeof(int *));
	while (i < l)
	{
		if (tab[0][i] == '.')
			change[i] = 1;
		else
			change[i] = 0;
		i++;
	}
	return (change);
}

int	**solution(char **tab, int h, int l, int **change)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	value = 0;
	while (i < (h - 1))
	{
		j = 0;
		while (j < l)
		{
			value = condition(change[i][j + 1], change[i][j], change[i + 1][j]);
			if (tab[i + 1][j + 1] == 'o')
				value = 0;
			change[i + 1][j + 1] = value;
			j++;
		}
		i++;
	}
	return (change);
}

int	**first_one(char **tab, int **change, int h)
{
	int	i;

	i = 0;
	while (i < h)
	{
		if (tab[i][0] == '.')
			change[i][0] = 1;
			i++;
	}
	return (change);
}

int	**sol(char **tab, int h, int l)
{
	int	i;
	int	j;
	int	**change;
	int	g;

	i = 0;
	i = 0;
	g = 1;
	change = NULL;
	change = malloc(h * sizeof(int *));
	while (i < h)
	{
		change[i] = malloc((l + 1) * sizeof(int *));
		i++;
	}
	change[0] = first_ligne(tab, h, l);
	change = first_one(tab,change,h);
	return (solution(tab, h, l, change));
}

int main(void)
{
	char **tab = tableau();
	int largeur = 17;
	int hauteur = 8;
	char *taille;
	taille[0] = '8';
	taille[1] = '17'
	int **tab_chiffre = sol(tab, hauteur, largeur,taille);
	int i;
	int j;

	i = 0;
	while (i < hauteur)
	{
		j = 0;
		while (j < largeur)
		{
			printf("%d", tab_chiffre[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	// system("leaks a.out");
}
