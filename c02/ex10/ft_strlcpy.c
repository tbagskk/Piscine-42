/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:34:27 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/18 14:48:06 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < (size - 1) && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dest[i] = 0;
	}
	while (src[i])
	{
		++i;
	}
	return (i);
}
