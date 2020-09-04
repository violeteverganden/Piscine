/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 14:09:51 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 09:16:35 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	(void)argc;

	printf("strstr says\n");
	if (strstr(argv[1], argv[2]))
		printf("%s found in %s\n", argv[2], argv[1]);
	else
		printf("%s not found in %s\n", argv[2], argv[1]);
	printf("ft_strstr says\n");
	if (ft_strstr(argv[1], argv[2]))
		printf("%s found in %s\n", argv[2], argv[1]);
	else
		printf("%s not found in %s\n", argv[2], argv[1]);
}
