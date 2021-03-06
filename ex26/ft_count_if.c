/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 03:26:50 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/12 03:27:51 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int x;
	int i;

	i = 0;
	x = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			x++;
		i++;
	}
	return (x);
}
