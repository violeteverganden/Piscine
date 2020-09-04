/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 06:28:45 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 14:31:33 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
//	char *binary = "01";
//	char *decimal = "0123456789";
//	char *hex = "0123456789abcedf";

	(void)argc;
	printf("After convert : %s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}
