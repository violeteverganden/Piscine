/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 13:12:52 by diwata            #+#    #+#             */
/*   Updated: 2020/08/21 13:18:37 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int	main(void)
{
	int tab[10];

	for (int i = 0; i < 10; i++)
		tab[i] = i;
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
