/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:12:35 by diwata            #+#    #+#             */
/*   Updated: 2020/08/17 16:50:54 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int g_sign = 1;
int g_decimal;
int g_len_result;
char *g_result;

void	ft_convert_to_base_to(char *base_to);
void	ft_allocate(void);
void	ft_find_len_result(char *base_to);
int		ft_char_is_in_base(char c, char *base, int *value);
void	ft_convert_to_decimal(char *nbr, char *base_from);
void	ft_remove_space_and_sign(char **nbr);
int		ft_is_valid_base(char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

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

void	ft_convert_to_decimal(char *nbr, char *base_from)
{
	int radix;
	int value;

	radix = 0;
	while (base_from[radix])
		radix++;
	value = 0;
	while (ft_char_is_in_base(*nbr, base_from, &value))
	{
		g_decimal = g_decimal * radix + value;
		nbr++;
	}
}

void	ft_remove_space_and_sign(char **nbr)
{
	while (**nbr == ' ' || (**nbr >= '\t' && **nbr <= '\r'))
		*nbr += 1;
	while (**nbr == '+' || **nbr == '-')
	{
		if (**nbr == '-')
			g_sign *= -1;
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
	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	ft_remove_space_and_sign(&nbr);
	ft_convert_to_decimal(nbr, base_from);
	if (g_decimal == 0)
	{
		g_result = (char *)malloc(sizeof(char) * 2);
		g_result[0] = base_to[0];
		g_result[1] = '\0';
		return (g_result);
	}
	ft_find_len_result(base_to);
	ft_allocate();
	ft_convert_to_base_to(base_to);
	return (g_result);
}
