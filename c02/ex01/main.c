/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:05:00 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 19:37:00 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[7] ="failed";
	char s2[7] ="failed";

	strncpy(s1, "succeeded", 6);
	ft_strncpy(s2, "succeeded", 6);
	printf("answer : %s\n", s1);
	printf("result : %s\n", s2);
}
