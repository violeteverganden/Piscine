/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:27:09 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 08:21:48 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char dest1[10] = "42";
	char dest2[10] = "42";
	char src[10] = "tokyo";

	printf("strcat    : %s\n", strcat(dest1, src));
	printf("ft_strcat : %s\n", ft_strcat(dest2, src));
}
