/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:57:19 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 17:13:54 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_ascendant(int *tab, int length, int (*f)(int, int))
{
	while (length > 1 && f(tab[0], tab[1]) <= 0)
	{
		tab++;
		length--;
	}
	if (length == 1)
		return (1);
	return (0);
}

int	ft_is_decendant(int *tab, int length, int (*f)(int, int))
{
	while (length > 1 && f(tab[0], tab[1]) >= 0)
	{
		tab++;
		length--;
	}
	if (length == 1)
		return (1);
	return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length < 1)
		return (0);
	if (length == 1)
		return (1);
	while (length > 1 && f(tab[0], tab[1]) == 0)
	{
		tab++;
		length--;
	}
	if (length == 1)
		return (1);
	if (f(tab[0], tab[1]) < 0)
	{
		if (ft_is_ascendant(tab, length, f))
			return (1);
	}
	else if (f(tab[0], tab[1]) > 0)
	{
		if (ft_is_decendant(tab, length, f))
			return (1);
	}
	return (0);
}
