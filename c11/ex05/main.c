/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 15:28:25 by diwata            #+#    #+#             */
/*   Updated: 2020/08/26 19:10:11 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	(*g_operator[5])(int, int);

void	ft_calculate(int a, char op, int b)
{
	if (op == '+')
		g_operator[0](a, b);
	if (op == '-')
		g_operator[1](a, b);
	if (op == '*')
		g_operator[2](a, b);
	if (op == '/')
		g_operator[3](a, b);
	if (op == '%')
		g_operator[4](a, b);
}

void	ft_assign_func_pointer(void)
{
	g_operator[0] = &sum;
	g_operator[1] = &sub;
	g_operator[2] = &multiple;
	g_operator[3] = &divide;
	g_operator[4] = &modulo;
}

int		ft_is_valid_operator(char op)
{
	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	char	op;
	int		a;
	int		b;

	if (ac != 4)
		return (1);
	if (av[2][1] || !ft_is_valid_operator(av[2][0]))
	{
		ft_putstr("0\n");
		return (1);
	}
	op = av[2][0];
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	ft_assign_func_pointer();
	ft_calculate(a, op, b);
	ft_putstr("\n");
	return (0);
}
