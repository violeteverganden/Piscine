/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:20:54 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 21:46:12 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char **argv)
{
	unsigned int size;

	size = 2;
	(void)argc;
	printf("Before strlcpy : %s\n", argv[1]);
	printf("Return of strlcpy : %lu\n", strlcpy(argv[1], argv[2], size));
	printf("After strlcpy  : %s\n", argv[1]);
	printf("Before ft_strlcpy : %s\n", argv[3]);
	printf("Return of ft_strlcpy : %d\n", ft_strlcpy(argv[3], argv[4], size));
	printf("After ft_strlcpy  : %s\n", argv[3]);
}
