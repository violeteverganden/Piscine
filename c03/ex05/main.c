/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:27:09 by diwata            #+#    #+#             */
/*   Updated: 2020/08/18 19:38:48 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char dest1[10] = "42";
	char dest2[10] = "42";
	char src[10] = "tokyo";
	unsigned int size = 0;

	printf("return of strlcat : %lu\n", strlcat(dest1, src, size));
	printf("result : %s\n", dest1);
	printf("return of ft_strlcat : %u\n", ft_strlcat(dest2, src, size));
	printf("result : %s\n", dest2);
}
