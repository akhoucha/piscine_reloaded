/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_renge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:37:16 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/09 19:39:21 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		value;

	i = 0;
	if (min >= max)
		return (NULL);
	value = min;
	tab = malloc(sizeof(int) * (max - min));
	while (value < max)
	{
		tab[i] = value;
		value++;
		i++;
	}
	return (tab);
}
