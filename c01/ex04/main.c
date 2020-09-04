/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:28:58 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 07:47:10 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int x;
	int y;

	x = 42;
	y = 24;
	ft_ultimate_div_mod(&x, &y);
	printf("result of division\n");
	printf("42 / 21 : %d\n", x);
	printf("modulo  : %d\n", y);
}
