/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 13:12:52 by diwata            #+#    #+#             */
/*   Updated: 2020/08/21 14:21:02 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));
void	ft_foreach(int *tab, int length, void(*f)(int));

int	ft_double(int nb)
{
	return (nb * 2);
}

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int	main(void)
{
	int tab[10];
	int *result;

	for (int i = 0; i < 10; i++)
		tab[i] = i;
	result = ft_map(tab, 10, &ft_double);
	ft_foreach(result, 10, &ft_putnbr);
	return (0);
}
