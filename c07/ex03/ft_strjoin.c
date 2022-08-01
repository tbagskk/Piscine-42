/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:34:13 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/28 23:38:00 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		j++;
	}
	return (j);
}

int	ft_strslen(char **strs, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = b + ft_strlen(strs[a]);
		a++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	int		k;
	int		len;
	char	*tab;

	a = -1;
	b = 0;
	k = 0;
	len = ft_strslen(strs, size);
	tab = malloc(len * sizeof(char) + (ft_strlen(sep) * size -1) + 1);
	while (++a < size)
	{
		while (b < ft_strlen(strs[a]))
			tab[k++] = strs[a][b++];
		b = 0;
		if (a != size -1)
		{
			while (b < ft_strlen(sep))
				tab[k++] = sep[b++];
		}
		b = 0;
	}
	tab[k] = '\0';
	return (tab);
}
