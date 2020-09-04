/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:23:10 by diwata            #+#    #+#             */
/*   Updated: 2020/08/13 11:51:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main()
{
	char *FT_NBR1 = "\\'?\"\\\"'\\";
	char *base1 = "'\\\"?!";
	char *FT_NBR2 = "rcrdmddd";
	char *base2 = "mrdoc";
	char *FT_NBR3 = "Salut";
	char *base3 = "gtaio luSnemf";

	printf("FT_NBR1 : %s\n", FT_NBR1);
	printf("base1   : %s\n", base1);
	printf("decimal : %d\n", ft_atoi_base(FT_NBR1, base1));
	printf("FT_NBR2 : %s\n", FT_NBR2);
	printf("base2   : %s\n", base2);
	printf("decimal : %d\n", ft_atoi_base(FT_NBR2, base2));
	printf("sum     : %d\n", ft_atoi_base(FT_NBR1, base1) + ft_atoi_base(FT_NBR2, base2));
	printf("FT_NBR3 : %s\n", FT_NBR3);
	printf("base3   : %s\n", base3);
	printf("decimal : %d\n", ft_atoi_base(FT_NBR3, base3));
	printf("result  : %d\n", ft_atoi_base(FT_NBR3, base3));
}
