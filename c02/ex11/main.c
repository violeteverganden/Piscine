/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:01:48 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 07:07:46 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

//int	main(int argc, char **argv)
//{
//	(void)argc;
//	printf("%s\n", argv[1]);
//	ft_putstr_non_printable(argv[1]);
//}

int	main(void)
{
	char *s = "ExtendedASCII from \x80 to \xff";
	printf("%s\n", s);
	printf("becomes\n");
	ft_putstr_non_printable(s);
}
