/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:31:40 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 07:22:15 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *str;

	str = "Extended ASCII from \x80 to \xff. It takes lots of time to find";
	ft_print_memory(str, 0);
	printf("size 0 above");
	putchar('\n');
	ft_print_memory(str, strlen(str) + 1);
}
