/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 07:34:55 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 07:47:31 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 42;
	b = 24;
	ft_div_mod(a, b, &x, &y);
	printf("result of division\n");
	printf("42 / 24 : %d\n", x);
	printf("modulo  : %d\n", y);
}
