/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:17:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 17:57:58 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	display_nth_list(t_list *first)
{
	t_list	*res;

	printf("from 1st\n");
	res = ft_list_at(first, 0);
	printf("0th data : %s\n", res->data);
	res = ft_list_at(first, 1);
	printf("1th data : %s\n", res->data);
	res = ft_list_at(first, 2);
	printf("2th elem : %p\n", res);
	printf("from 2nd\n");
	res = ft_list_at(first->next, 0);
	printf("0th data : %s\n", res->data);
	res = ft_list_at(first->next, 1);
	printf("1th data : %p\n", res);
	printf("from 3rd\n");
	res = ft_list_at(first->next->next, 0);
	printf("0th data : %p\n", res);
}

void	create_list(t_list **first)
{
	ft_list_push_front(first, "Tokyo");
	ft_list_push_front(first, "42");
	printf("first  : %s\n", (*first)->data);
	printf("second : %s\n", (*first)->next->data);
}

int		main(void)
{
	t_list	*first;

	first = NULL;
	create_list(&first);
	display_nth_list(first);
}
