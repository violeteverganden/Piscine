
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 12:30:47 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 12:34:56 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	unsigned int n;

	(void)argc;
	n = 5;
	printf("strncmp    : %d\n", strncmp(argv[1], argv[2], n));
	printf("ft_strncmp : %d\n", ft_strncmp(argv[1], argv[2], n));
}
