/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:53:38 by diwata            #+#    #+#             */
/*   Updated: 2020/09/04 10:40:46 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
				int (*cmp)(), void (*free_fct)(void *))
{
	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
			free_fct(begin_list->data);
		begin_list = begin_list->next;
	}
}
