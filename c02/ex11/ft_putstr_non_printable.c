/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:03:53 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 06:54:03 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_is_printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char *hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (ft_char_is_printable(*str))
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char)(*str) / 16]);
			ft_putchar(hex[(unsigned char)(*str) % 16]);
		}
		str++;
	}
}
