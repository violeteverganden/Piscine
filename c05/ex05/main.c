/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:20:19 by diwata            #+#    #+#             */
/*   Updated: 2020/08/15 08:37:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	(void)argc;

	if (atoi(argv[1]) == 0 || ft_sqrt(atoi(argv[1])))
		printf("square root exists : %d\n", ft_sqrt(atoi(argv[1])));
	else
		printf("square root doesn't exist : %d\n", atoi(argv[1]));
}
