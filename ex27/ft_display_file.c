/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 03:32:46 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/12 03:37:32 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	display_file(char **argv)
{
	int		fd;
	char	buf[2];

	fd = open(argv[1], O_RDONLY);
	if (fd != (-1))
	{
		while (read(fd, buf, 1) > 0)
		{
			buf[1] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc == 1)
	{
		str = "File name missing.\n";
		ft_putstr(str);
	}
	else if (argc > 2)
	{
		str = "Too many arguments.\n";
		ft_putstr(str);
	}
	else
		display_file(argv);
	return (0);
}
