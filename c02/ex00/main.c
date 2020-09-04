/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:20:54 by diwata            #+#    #+#             */
/*   Updated: 2020/08/11 15:47:03 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[10] = "failed";
	char s2[10] = "failed";

	strcpy(s1, "succeeded");
	ft_strcpy(s2, "succeeded");
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
}
