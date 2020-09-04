/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:05:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/02 17:21:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	add_last(t_list **first)
{
	t_list *last;

	ft_list_push_front(first, "42");
	printf("first data : %s\n", (*first)->data);
	printf("first next : %p\n", (*first)->next);
	last = ft_list_last(*first);
	printf("last addr  : %p\n", last);
	printf("last data  : %s\n", last->data);
	printf("last next  : %p\n", last->next);
}

void	create_first_elem(t_list **first)
{
	ft_list_push_front(first, "Tokyo");
	printf("first data : %s\n", (*first)->data);
	printf("first next : %p\n", (*first)->next);
}

int		main(void)
{
	t_list *first;

	first = NULL;
	create_first_elem(&first);
	add_last(&first);
}
