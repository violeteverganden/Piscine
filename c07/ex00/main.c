/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 07:24:36 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 10:30:22 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	(void)argc;

	printf("return of strdup    : %s\n", strdup(argv[1]));
	printf("return of ft_strdup : %s\n", ft_strdup(argv[1]));
}
