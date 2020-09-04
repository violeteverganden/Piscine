/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:12:35 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 16:23:20 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_convert_decimal(char *result, int len_result, unsigned int temp, char *base_to)
{
	int radix;
	int last;

	radix = 0;
	while (base_to[radix])
		radix++;
	if (result[0] != '-')
	{
		last = len_result - 1;
		while (last >= 0)
		{
			result[last--] = base_to[temp % radix];
			temp /= radix;
		}
	}
	else if (result[0] == '-')
	{
		last = len_result;
		while (last >= 1)
		{
			result[last--] = base_to[temp % radix];
			temp /= radix;
		}
	}
}

char	*ft_allocate(char *result, int len_result, int sign)
{
	if (sign == 1)
	{
		result = (char *)malloc(sizeof(char) * (len_result + 1));
		result[len_result] = '\0';
	}
	else if (sign == -1)
	{
		result = (char *)malloc(sizeof(char) * (len_result + 2));
		result[0] = '-';
		result[len_result + 1] = '\0';
	}
	return (result);
}

void	ft_find_len_result(unsigned int temp, char *base_to, int *len_result)
{
	unsigned int radix;

	radix = 0;
	while (base_to[radix])
		radix++;
	while (temp >= radix)
	{
		*len_result += 1;
		temp /= radix;
	}
}

int	ft_char_is_in_base(char c, char *base, int *value)
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

void	ft_convert_nbr(char *nbr, char *base_from, unsigned int  *decimal)
{
	int radix;
	int value;

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

void	ft_remove_space_and_sign(char **nbr, int *sign)
{
	while (**nbr == ' ' || (**nbr >= '\t' && **nbr <= '\r'))
		*nbr += 1;
	*sign = 1;
	while (**nbr == '+' || **nbr == '-')
	{
		if (**nbr == '-')
			*sign *= -1;
		*nbr += 1;
	}
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	unsigned int decimal;
	int		len_result;
	char	*result;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (0);
	sign = 1;
	ft_remove_space_and_sign(&nbr, &sign);
	decimal = 0;
	ft_convert_nbr(nbr, base_from, &decimal);
	len_result = 1;
	ft_find_len_result(decimal, base_to, &len_result);
	result = NULL;
	result = ft_allocate(result, len_result, sign);
	ft_convert_decimal(result, len_result, decimal, base_to);
	free(result);
	return (result);
}
