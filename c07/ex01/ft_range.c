/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:17:07 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/28 23:31:27 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*retour;
	int	i;

	i = 0;
	retour = NULL;
	if (max <= min)
		return (retour);
	retour = malloc((max - min) * sizeof(int));
	if (!retour)
		return (NULL);
	while (min < max)
		retour[i++] = max - (max - min++);
	return (retour);
}
