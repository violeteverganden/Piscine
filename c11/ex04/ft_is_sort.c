/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 14:57:19 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 21:01:09 by diwata           ###   ########.fr       */
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

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int asc;
	int des;

	i = 0;
	asc = 1;
	des = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			des = 0;
		i++;
	}
	if (asc || des)
		return (1);
	return (0);
}
