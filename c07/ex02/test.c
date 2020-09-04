/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 08:53:08 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 10:52:48 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int size;
	int *temp;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	printf("range  : %p\n", range);
	printf("*range(before) : %p\n", *range);
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	printf("*range(after)  : %p\n", *range);
	temp = *range;
	while (min < max)
	{
		*temp = min;
		temp++;
		min++;
	}
	return (size);
}
