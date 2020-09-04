/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 13:37:03 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 13:41:11 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strcmp    : %d\n", strcmp(argv[1], argv[2]));
	printf("ft_strcmp : %d\n", ft_strcmp(argv[1], argv[2]));
}
