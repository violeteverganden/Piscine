/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:54:21 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 18:00:27 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char *str;

	str = "STARWARS";
	if (ft_str_is_uppercase(str) == 1)
		printf("str contains only uppercase alphabets");
	else
		printf("str contains non uppercase alphabet");
}
