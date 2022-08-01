/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:02:00 by gcherqui          #+#    #+#             */
/*   Updated: 2022/07/19 10:11:49 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == 0 || to_find[j] == str[i + j])
		{
			if (to_find[j] == 0)
				return (str + i);
			j++;
		}
		++i;
	}
	return (0);
}
