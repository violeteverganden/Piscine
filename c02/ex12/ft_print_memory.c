/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:31:40 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 08:02:05 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_character(unsigned char *addr, int to_print)
{
	while (to_print > 0)
	{
		if (*addr >= ' ' && *addr <= '~')
			ft_putchar(*addr);
		else
			ft_putchar('.');
		addr++;
		to_print--;
	}
}

void	ft_print_char_in_hex(unsigned char *addr, int to_print)
{
	char	*hex;
	int		printed;

	hex = "0123456789abcdef";
	printed = 0;
	while (to_print)
	{
		if (printed % 5 == 0)
		{
			ft_putchar(' ');
			printed++;
		}
		ft_putchar(hex[*addr / 16]);
		ft_putchar(hex[*addr % 16]);
		to_print--;
		printed += 2;
		addr++;
	}
	while (printed++ < 40)
		ft_putchar(' ');
}

void	ft_print_address(unsigned char *addr)
{
	char	*hex;
	long	decimal;
	int		i;
	char	digits[16];

	hex = "0123456789abcdef";
	decimal = (long)addr;
	i = 15;
	while (decimal)
	{
		digits[i--] = hex[decimal % 16];
		decimal /= 16;
	}
	while (i >= 0)
		digits[i--] = '0';
	while (++i < 16)
		ft_putchar(digits[i]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int offset;
	int to_print;

	if (size == 0)
		return (addr);
	offset = 0;
	to_print = 16;
	while (size > 0)
	{
		if (size < 16)
		{
			to_print = size;
			size = 0;
		}
		ft_print_address(addr + offset);
		ft_putchar(':');
		ft_print_char_in_hex(addr + offset, to_print);
		ft_putchar(' ');
		ft_print_character(addr + offset, to_print);
		ft_putchar('\n');
		if (size)
			size -= 16;
		offset += 16;
	}
	return (addr);
}
