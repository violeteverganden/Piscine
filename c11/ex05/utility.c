/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:30:31 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 16:34:35 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

void	ft_display_exception(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		digits[10];
	char	c;

	if (nb == 0 || nb == -2147483648)
	{
		ft_display_exception(nb);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	i = 0;
	while (nb > 0)
	{
		digits[i++] = nb % 10;
		nb = nb / 10;
	}
	while (--i >= 0)
	{
		c = digits[i] + '0';
		write(1, &c, 1);
	}
}
