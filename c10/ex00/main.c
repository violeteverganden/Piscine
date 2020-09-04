/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 10:24:09 by diwata            #+#    #+#             */
/*   Updated: 2020/08/28 19:01:28 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_read_file(char *file)
{
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Cannot read file.");
		return ;
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}

int		main(int ac, char **av)
{

	if (ac == 1)
		ft_puterror("File name missing.\n");
	else if (ac > 2)
		ft_puterror("Too many arguments.\n");
	else
		ft_read_file(av[1]);
	return (0);
}
