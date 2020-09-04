/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 10:23:50 by diwata            #+#    #+#             */
/*   Updated: 2020/08/17 21:14:20 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char **result;

	(void)argc;
	result = ft_split(argv[1], argv[2]);
	for (int i = 0; result[i]; i++)
		printf("%s\n", result[i]);
	return (0);
}
