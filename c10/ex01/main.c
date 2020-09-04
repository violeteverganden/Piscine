/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:39:57 by diwata            #+#    #+#             */
/*   Updated: 2020/08/27 14:04:19 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

char	*g_ft_cat;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_error(char *file)
{
	ft_putstr(basename(g_ft_cat));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	ft_display_content(int fd, char *file)
{
	int		rc;
	char	c;

	while ((rc = read(fd, &c, 1)))
	{
		if (errno)
		{
			ft_print_error(file);
			return ;
		}
		write(1, &c, 1);
	}
}

int		main(int ac, char **av)
{
	char	c;
	int		fd;
	int		i;

	g_ft_cat = av[0];
	if (ac == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
	}
	i = 0;
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_error(av[i]);
			continue ;
		}
		ft_display_content(fd, av[i]);
		close(fd);
	}
	return (0);
}
