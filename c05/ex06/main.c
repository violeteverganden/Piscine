/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:31:43 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 15:34:31 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	(void)argc;
	int n = atoi(argv[1]);

	if (ft_is_prime(n))
		printf("%d is prime number.", n);
	else
		printf("%d is not prime number.", n);
}
