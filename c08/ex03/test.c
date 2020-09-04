/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 21:42:29 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 16:51:09 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point	*point;

	point = malloc(sizeof(t_point));
	set_point(point);
	printf("point : %p\n", point);
	printf("&x : %p\n", &point->x);
	printf("&y : %p\n", &point->y);
	printf("x : %d\n", point->x);
	printf("y : %d\n", point->y);
	free(point);
	printf("point : %p\n", point);
	return (0);
}
