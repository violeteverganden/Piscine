/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:23:10 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 15:37:09 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *str, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	(void)argc;
	char *FT_NBR1 = "\\'?\"\\\"'\\";
	char *base1 = "'\\\"?!";
	char *FT_NBR2 = "rcrdmddd";
	char *base2 = "mrdoc";
	char *FT_NBR3 = "Salut";
	char *base3 = "gtaio luSnemf";

	printf("FT_NBR1 : %s\n", FT_NBR1);
	printf("base1   : %s\n", base1);
	printf("After convert : %s\n", ft_convert_base(FT_NBR1, base1, argv[1]));
	printf("FT_NBR2 : %s\n", FT_NBR2);
	printf("base2   : %s\n", base2);
	printf("After convert : %s\n", ft_convert_base(FT_NBR2, base2, argv[1]));
	printf("FT_NBR3 : %s\n", FT_NBR3);
	printf("base3   : %s\n", base3);
	printf("decimal : %s\n", ft_convert_base(FT_NBR3, base3, argv[1]));
	printf("result  : %s\n", ft_convert_base(FT_NBR3, base3, argv[1]));
}
