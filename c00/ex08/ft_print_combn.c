/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:53:44 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 11:07:10 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_carry_digits(int *digits, int n)
{
	int from_top;
	int from_bottom;
	int start;

	from_top = n - 1;
	from_bottom = 0;
	while (digits[from_top] + from_bottom == 9)
	{
		from_top--;
		from_bottom++;
	}
	start = from_top;
	digits[from_top] += 1;
	while (start < n)
	{
		digits[start + 1] = digits[start] + 1;
		start++;
	}
}

void	ft_print_digits(int *digits, int n)
{
	int i;

	i = 0;
	while (i < n)
		ft_putchar('0' + digits[i++]);
}

void	ft_print_combn(int n)
{
	int i;
	int digits[9];

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < 9)
	{
		digits[i] = i;
		i++;
	}
	while (digits[0] < 10 - n)
	{
		ft_print_digits(digits, n);
		ft_putchar(',');
		ft_putchar(' ');
		if (digits[n - 1] < 9)
			digits[n - 1] += 1;
		else
			ft_carry_digits(digits, n);
	}
	ft_print_digits(digits, n);
}
