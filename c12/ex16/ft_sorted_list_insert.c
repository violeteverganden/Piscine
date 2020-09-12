/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:25:43 by diwata            #+#    #+#             */
/*   Updated: 2020/09/11 09:35:00 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*curr;
	t_list	*temp;

	if (!begin_list)
		return ;
	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
	curr = *begin_list;
	while (curr->next && cmp(curr->data, curr->next->data) > 0)
	{
		temp = curr->next->data;
		curr->next->data = curr->data;
		curr->data = temp;
		curr = curr->next;
	}
}
