/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:27:09 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 08:22:28 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char dest1[10] = "42";
	char dest2[10] = "42";
	char src[10] = "tokyo";
	unsigned int nb = 3;

	printf("ft_strncat : %s\n", ft_strncat(dest2, src, nb));
	printf("strncat    : %s\n", strncat(dest1, src, nb));
}
