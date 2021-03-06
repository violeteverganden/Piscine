/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:48:59 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 12:24:54 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	display_list(int ac, t_list *first)
{
	int		i;

	i = 0;
	while (i < ac)
	{
		printf("%d : %s\n", i++, first->data);
		first = first->next;
	}
	printf("last addr : %p\n", first);
}

int		main(int ac, char **av)
{
	t_list	*first;

	first = ft_list_push_strs(ac - 1, av + 1);
	display_list(ac - 1, first);
}
