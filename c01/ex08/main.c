/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 21:49:16 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 08:26:38 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main()
{
	int table[10];

	srand((int)time(NULL));
	printf("Before sorted: ");
	for (int i = 0; i < 10; i++)
	{
	    table[i] = rand() % 10;
	    printf("%d ", table[i]);
	}
	putchar('\n');
	ft_sort_int_tab(table, 10);
	printf("After sorted : ");
	for (int i = 0; i < 10; i++)
	    printf("%d ", table[i]);
}
