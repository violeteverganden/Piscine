/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:48:59 by diwata            #+#    #+#             */
/*   Updated: 2020/09/11 09:37:07 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	display_list(int ac, t_list *first)
{
	int		i;

	i = 0;
	while (i < ac)
	{
		printf("%dth : %s\n", i++, first->data);
		first = first->next;
	}
	putchar('\n');
}

void	display_argv(int ac, char **av)
{
	int		i;

	i = 0;
	while (i <= ac)
	{
		printf("%dth : %s\n", i, *av++);
		i++;
	}
	putchar('\n');
}

int		main(int ac, char **av)
{
	t_list	*first;

	ac--;
	av++;
	printf("argv\n");
	display_argv(ac, av);
	printf("original list\n");
	first = ft_list_push_strs_back(ac, av);
	display_list(ac, first);
	printf("sorted list\n");
	ft_list_sort(&first, &ft_strcmp);
	display_list(ac, first);
	printf("inserted list\n");
//	ft_sorted_list_insert(&first, " ", &ft_strcmp);
//	ft_sorted_list_insert(&first, "piscine", &ft_strcmp);
	ft_sorted_list_insert(&first, "xyz", &ft_strcmp);
	display_list(ac + 1, first);
}
