/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 07:03:02 by diwata            #+#    #+#             */
/*   Updated: 2020/08/14 16:42:39 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_is_negative(int n);

int	main(int argc, char **argv)
{
	(void)argc;

	ft_is_negative(atoi(argv[1]));
}
