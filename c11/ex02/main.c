/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:25:16 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 18:50:15 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	ft_is_exist(char *str)
{
	if (*str)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_any(argv, &ft_is_exist));
}
