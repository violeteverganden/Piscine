/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:53:38 by diwata            #+#    #+#             */
/*   Updated: 2020/09/05 12:24:19 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
				int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!begin_list || !*begin_list)
		return ;
	curr = *begin_list;
	next = curr->next;
	while (cmp(curr->data, data_ref) == 0)
	{
		free_fct(curr->data);
		free(curr);
		curr = next;
		next = curr->next;
	}
	*begin_list = curr;
	while (curr)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			free_fct(curr->data);
			free(curr);
		}
		curr = next;
		next = curr->next;
	}
}
