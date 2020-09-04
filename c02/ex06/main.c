/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:54:21 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 18:10:29 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char *str;

	str = "STAR\tWARS";
	if (ft_str_is_printable(str) == 1)
		printf("str contains only printable characters");
	else
		printf("str contains non printable character");
}
