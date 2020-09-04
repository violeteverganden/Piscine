/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:17:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/04 13:09:57 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	free_list(void *data)
{
	data = NULL;
}

void	print_freed_list(t_list *first)
{
	printf("After freed\n");
	printf("1st addr : %p\n", first);
	printf("2nd addr : %p\n", first->next);
	printf("1st data : %p\n", first->data);
	printf("2nd data : %p\n", first->next->data);
}

void	create_list(t_list **first)
{
	ft_list_push_front(first, "Tokyo");
	ft_list_push_front(first, "42");
	printf("1st addr : %p\n", *first);
	printf("2nd addr : %p\n", (*first)->next);
	printf("1st data : %s\n", (*first)->data);
	printf("2nd data : %s\n", (*first)->next->data);
}

int		main(void)
{
	t_list	*first;

	first = NULL;
	create_list(&first);
	ft_list_clear(first, &free_list);
	print_freed_list(first);
}
