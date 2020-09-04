/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:12:35 by diwata            #+#    #+#             */
/*   Updated: 2020/08/17 16:47:16 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

extern int g_sign;
extern int g_decimal;
extern int g_len_result;
extern char *g_result;

void	ft_convert_to_base_to(char *base_to);
void	ft_allocate(void);
void	ft_find_len_result(char *base_to);

void	ft_convert_to_base_to(char *base_to)
{
	int				radix;
	int				last;

	radix = 0;
	while (base_to[radix])
		radix++;
	if (g_result[0] != '-')
	{
		last = g_len_result - 1;
		while (last >= 0)
		{
			g_result[last--] = base_to[g_decimal % radix];
			g_decimal /= radix;
		}
	}
	else if (g_result[0] == '-')
	{
		last = g_len_result;
		while (last >= 1)
		{
			g_result[last--] = base_to[g_decimal % radix];
			g_decimal /= radix;
		}
	}
}

void	ft_allocate(void)
{
	if (g_sign == 1)
	{
		g_result = (char *)malloc(sizeof(char) * (g_len_result + 1));
		g_result[g_len_result] = '\0';
	}
	else if (g_sign == -1)
	{
		g_result = (char *)malloc(sizeof(char) * (g_len_result + 2));
		g_result[0] = '-';
		g_result[g_len_result + 1] = '\0';
	}
}

void	ft_find_len_result(char *base_to)
{
	unsigned int	temp;
	int				radix;

	radix = 0;
	while (base_to[radix])
		radix++;
	temp = g_decimal;
	while (temp)
	{
		g_len_result += 1;
		temp /= radix;
	}
}
