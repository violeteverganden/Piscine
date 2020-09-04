/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:12:35 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 21:31:54 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_decimal(char *res, int digits, long long temp, char *base)
{
	int radix;
	int last;

	radix = 0;
	while (base[radix])
		radix++;
	if (res[0] != '-')
	{
		last = digits - 1;
		while (last >= 0)
		{
			res[last--] = base[temp % radix];
			temp /= radix;
		}
	}
	else if (res[0] == '-')
	{
		last = digits;
		while (last >= 1)
		{
			res[last--] = base[temp % radix];
			temp /= radix;
		}
	}
	return (res);
}

char	*ft_allocate(char *result, int digits, int sign)
{
	if (sign == 1)
	{
		result = (char *)malloc(sizeof(char) * (digits + 1));
		result[digits] = '\0';
	}
	else if (sign == -1)
	{
		result = (char *)malloc(sizeof(char) * (digits + 2));
		result[0] = '-';
		result[digits + 1] = '\0';
	}
	return (result);
}

int		ft_find_nbr_of_digits(long long decimal, char *base_to)
{
	int radix;
	int digits;

	radix = 0;
	while (base_to[radix])
		radix++;
	digits = 1;
	while (decimal >= radix)
	{
		digits++;
		decimal /= radix;
	}
	return (digits);
}
