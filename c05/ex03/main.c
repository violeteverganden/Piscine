/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 13:33:22 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 13:40:35 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
