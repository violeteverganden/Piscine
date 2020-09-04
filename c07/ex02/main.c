/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 07:30:38 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 21:05:25 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int *array = NULL;
	unsigned int range = atoi(argv[2]) - atoi(argv[1]);

	(void)argc;
	printf("Min    : %s\n", argv[1]);
	printf("Max    : %s\n", argv[2]);
	printf("&array : %p\n", &array);
	printf("array(before): %p\n", array);
	printf("return value : %d\n", ft_ultimate_range(&array, atoi(argv[1]), atoi(argv[2])));
	printf("array(after) : %p\n", array);
	for (unsigned int i = 0; i < range; i++)
		printf("%d,", array[i]);
}
