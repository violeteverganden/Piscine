/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:48:59 by diwata            #+#    #+#             */
/*   Updated: 2020/09/09 18:03:56 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	display_rev_list(int ac, t_list *first)
{
	int		i;

	printf("After reverse\n");
	i = 0;
	while (i < ac)
	{
		printf("%dth : %s\n", i++, first->data);
		first = first->next;
	}
}

void	display_original(int ac, char **av)
{
	int		i;

	printf("Before reverse\n");
	i = 0;
	while (i <= ac)
	{
		printf("%dth : %s\n", i, *av++);
		i++;
	}
}

int		main(int ac, char **av)
{
	t_list	*first;

	ac--;
	av++;
	display_original(ac, av);
	putchar('\n');
	first = ft_list_push_strs_back(ac, av);
	ft_list_reverse_fun(first);
	display_rev_list(ac, first);
}
