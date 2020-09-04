/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:13:16 by diwata            #+#    #+#             */
/*   Updated: 2020/08/08 20:49:02 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int upper;
	int lower;

	upper = 00;
	while (upper <= 97)
	{
		lower = upper + 1;
		while (lower <= 99)
		{
			ft_putchar('0' + upper / 10);
			ft_putchar('0' + upper % 10);
			ft_putchar(' ');
			ft_putchar('0' + lower / 10);
			ft_putchar('0' + lower % 10);
			ft_putchar(',');
			ft_putchar(' ');
			lower++;
		}
		upper++;
	}
	write(1, "98 99", 5);
}
