/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:49:42 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 17:59:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char *str = "432a72389";
	if (ft_str_is_numeric(str) == 1)
		printf("str contains only numbers");
	else
		printf("str contains non number character");
}
