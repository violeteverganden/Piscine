/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 07:30:38 by diwata            #+#    #+#             */
/*   Updated: 2020/08/18 18:26:15 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int *array;
	unsigned int range;

	(void)argc;
	printf("Min : %s\n", argv[1]);
	printf("Max : %s\n", argv[2]);
	range = atoi(argv[2]) - atoi(argv[1]);
	printf("range : %u\n", range);
	array = ft_range(atoi(argv[1]), atoi(argv[2]));
	for (unsigned int i = 0; i < range; i++)
		printf("%d, ", array[i]);
}
