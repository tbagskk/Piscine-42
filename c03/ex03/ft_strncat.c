/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:55:51 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/18 21:48:04 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[a] && nb--)
	{
		dest[i++] = src[a];
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
