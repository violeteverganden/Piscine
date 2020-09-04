
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 22:30:36 by diwata            #+#    #+#             */
/*   Updated: 2020/08/10 07:34:25 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int x;
	int y;

	x = 42;
	y = 21;
	printf("Before swap\n");
	printf("x : %d, y : %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap\n");
	printf("x : %d, y : %d", x, y);
}
