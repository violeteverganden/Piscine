/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:54:21 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 17:57:25 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char *str;

	str = "";
	if (ft_str_is_lowercase(str) == 1)
		printf("str contains only lowercase alphabets");
	else
		printf("str contains non lowercase alphabet");
}
