/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:44:36 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 14:57:41 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_in_base(char c, char *base, int *value)
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

int	ft_convert_str(char *str, char *base)
{
	int radix;
	int value;
	int decimal;

	radix = 0;
	while (base[radix])
		radix++;
	value = 0;
	decimal = 0;
	while (ft_is_in_base(*str, base, &value))
	{
		decimal = decimal * radix + value;
		str++;
	}
	return (decimal);
}

int	ft_is_valid_base(char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int negative_count;
	int result;

	if (!ft_is_valid_base(base))
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	negative_count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative_count++;
		str++;
	}
	result = ft_convert_str(str, base);
	if (negative_count % 2)
		result *= -1;
	return (result);
}
