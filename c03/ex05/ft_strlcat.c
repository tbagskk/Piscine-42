/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:37:56 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/19 10:30:38 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = -1;
	while (++index < size && *dest)
		dest++;
	if (index == size)
		return (index + ft_strlen(src));
	while (++index < size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (index - 1 + ft_strlen(src));
}
