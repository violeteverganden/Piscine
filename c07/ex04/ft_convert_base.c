/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:12:35 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 17:48:16 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_nbr_of_digits(long long decimal, char *base_to);
char	*ft_allocate(char *result, int digits, int sign);
char	*ft_convert_decimal(char *res, int digits, long long temp, char *base);

int		ft_char_is_in_base(char c, char *base, int *value)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			*value = i;
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_convert_nbr(char *nbr, char *base_from, long long *decimal)
{
	int			radix;
	int			value;

	radix = 0;
	while (base_from[radix])
		radix++;
	value = 0;
	while (ft_char_is_in_base(*nbr, base_from, &value))
	{
		*decimal = *decimal * radix + value;
		nbr++;
	}
}

char	*ft_remove_prefix(char *nbr, int *sign)
{
	while (*nbr == ' ' || (*nbr >= '\t' && *nbr <= '\r'))
		nbr++;
	*sign = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			*sign *= -1;
		nbr++;
	}
	return (nbr);
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
		if (*base == ' ' || (*base >= '\t' && *base <= '\r'))
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			sign;
	long long	decimal;
	int			digits;
	char		*result;

	if (!*nbr)
		return (NULL);
	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	sign = 1;
	nbr = ft_remove_prefix(nbr, &sign);
	decimal = 0;
	ft_convert_nbr(nbr, base_from, &decimal);
	if (decimal == 0)
		sign = 1;
	digits = ft_find_nbr_of_digits(decimal, base_to);
	result = NULL;
	result = ft_allocate(result, digits, sign);
	if (!result)
		return (NULL);
	result = ft_convert_decimal(result, digits, decimal, base_to);
	return (result);
}
