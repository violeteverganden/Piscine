/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:05:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/02 17:11:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	add_elem(t_list **first)
{
	ft_list_push_front(first, "42");
	printf("size from next  : %d\n", ft_list_size((*first)->next));
	printf("size from first : %d\n", ft_list_size(*first));
}

void	create_first_elem(t_list **first)
{
	ft_list_push_front(first, "Tokyo");
	printf("size of first   : %d\n", ft_list_size(*first));
}

int		main(void)
{
	t_list *first;

	first = NULL;
	printf("size of null    : %d\n", ft_list_size(first));
	create_first_elem(&first);
	add_elem(&first);
}
