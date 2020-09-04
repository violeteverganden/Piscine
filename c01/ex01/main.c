/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 07:26:10 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 07:31:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	main(void)
{
	int a;
	int *b;
	int **c;

	a = 21;
	b = &a;
	c = &b;
	printf("value of a  : %d", a);
	putchar('\n');
	printf("value of *b : %d", *b);
	putchar('\n');
	putchar('\n');
	printf("address of b  : %p", b);
	putchar('\n');
	printf("address of *c : %p", *c);
}
