/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:14:27 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/09 20:11:17 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 42;
	while (argv[++i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
