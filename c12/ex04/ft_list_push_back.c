/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:21:21 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 13:24:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*last;

	elem = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = elem;
		return ;
	}
	last = *begin_list;
	while (last->next)
		last = last->next;
	last->next = elem;
}
