/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:06:32 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 11:33:36 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf(" : nb == 42");
	ft_putnbr(42);
	putchar('\n');
	printf(" : nb == -42");
	ft_putnbr(-42);
	putchar('\n');
	printf(" : nb == 0");
	ft_putnbr(0);
	putchar('\n');
	printf(" : nb == 2147483647");
	ft_putnbr(2147483647);
	putchar('\n');
	printf(" : nb == -2147483648");
	ft_putnbr(-2147483648);
}
