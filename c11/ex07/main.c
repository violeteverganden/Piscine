/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 16:46:12 by diwata            #+#    #+#             */
/*   Updated: 2020/08/27 09:54:48 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

//int		ft_strcmp(char *s1, char *s2)
//{
//	while (*s1 || *s2)
//	{
//		if (*s1 != *s2)
//			return (*s1 - *s2);
//		s1++;
//		s2++;
//	}
//	return (0);
//}

int		ft_strlencmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	return (i - j);
}

int		main(int ac, char **av)
{
	(void)ac;
	ft_advanced_sort_string_tab(&av[1], &ft_strlencmp);
//	while (*av)
//		printf("%s\n", *av++);
}
