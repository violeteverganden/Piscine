/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:51:04 by diwata            #+#    #+#             */
/*   Updated: 2020/08/11 16:00:36 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char *s1;
	char *s2;

	s1 = "Thankyouforyourevaluation";
	s2 = "42tokyo";
	if (ft_str_is_alpha(s1))
		printf("Only alphabets");
	else
		printf("Not only alphabets");
	if (ft_str_is_alpha(s2))
		printf("Only alphabets");
	else
		printf("Not only alphabets");
}
