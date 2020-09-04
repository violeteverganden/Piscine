/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:06:32 by diwata            #+#    #+#             */
/*   Updated: 2020/08/09 23:50:08 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_exception(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int digits[10];

	if (nb == 0 || nb == -2147483648)
	{
		ft_display_exception(nb);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	i = 0;
	while (nb > 0)
	{
		digits[i++] = nb % 10;
		nb = nb / 10;
	}
	while (--i >= 0)
	{
		ft_putchar('0' + digits[i]);
	}
}
