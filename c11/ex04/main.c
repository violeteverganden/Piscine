/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 15:00:05 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 18:28:04 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_numcmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int size;
	int mod;
	int *tab;

	srand((int)time(NULL));
	size = 5;
	mod = 2;
	tab = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % mod;
		printf("%d, ", tab[i]);
	}
	putchar('\n');
	if (ft_is_sort(tab, size, &ft_numcmp))
		printf("Sorted.\n");
	else
		printf("Not sorted.\n");
	return (0);
}
