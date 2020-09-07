/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:48:59 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 16:07:25 by diwata           ###   ########.fr       */
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
		printf("%dth data : %s\n", i++, first->data);
		first = first->next;
	}
	printf("last addr : %p\n", first);
}

void	display_av(int ac, char **av)
{
	int i;

	printf("argv\n");
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

	display_av(ac - 1, av + 1);
	first = ft_list_push_strs_back(ac - 1, av + 1);
	ft_list_sort(&first, &ft_strcmp);
	display_list(ac - 1, first);
}
