/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:00:25 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/28 19:04:00 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == *str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !(ft_charset(str + i, charset)))
		i++;
	return (i);
}

int	ft_nbr(char *str, char *charset)
{	
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (*str)
	{
		while (*str && ft_charset(str, charset))
			str++;
		i = ft_word(str, charset);
		str += i;
		if (i)
			a++;
	}
	return (a);
}

char	*ft_copy(char *src, int a)
{
	char	*tab;

	tab = malloc(sizeof(char) * (a + 1));
	if (!(tab))
		return (NULL);
	tab[a] = 0;
	while (a--)
		tab[a] = src[a];
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;
	int		n;

	i = 0;
	size = ft_nbr(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	i = -1;
	if (!(tab))
		return (NULL);
	while (++i < size)
	{
		while (*str && ft_charset(str, charset))
			str++;
		n = ft_word(str, charset);
		tab[i] = ft_copy(str, n);
		if (!tab[i])
			return (NULL);
		str += n;
	}
	tab[size] = 0;
	return (tab);
}
