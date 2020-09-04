/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 23:27:07 by diwata            #+#    #+#             */
/*   Updated: 2020/08/07 09:57:04 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char hundreds;
	char tens;
	char ones;

	hundreds = '0';
	while (hundreds <= '6')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				ft_putchar(hundreds);
				ft_putchar(tens);
				ft_putchar(ones);
				ft_putchar(',');
				ft_putchar(' ');
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
	write(1, "789", 3);
}
