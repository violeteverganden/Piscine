/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:44:36 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 15:05:11 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_convert_nbr(int nbr, int digits[], int radix)
{
	int i;

	i = 0;
	if (nbr > 0)
	{
		while (nbr)
		{
			digits[i++] = nbr % radix;
			nbr /= radix;
		}
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		while (nbr)
		{
			digits[i++] = (nbr % radix) * -1;
			nbr /= radix;
		}
	}
	return (i);
}

int		ft_is_valid_base(char *base)
{
	int i;

	if (!base[0] || !base[1])
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		if (!(*base >= ' ' && *base <= '~'))
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int radix;
	int digits[32];
	int last;

	if (!ft_is_valid_base(base))
		return ;
	radix = 0;
	while (base[radix])
		radix++;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	last = ft_convert_nbr(nbr, digits, radix) - 1;
	while (last >= 0)
		ft_putchar(base[digits[last--]]);
}
