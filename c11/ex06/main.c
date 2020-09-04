/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 16:46:12 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 16:47:54 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int		main(int ac, char **av)
{
	(void)ac;
	ft_sort_string_tab(av);
	while (*av)
		printf("%s\n", *av++);
}
