/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:28:55 by diwata            #+#    #+#             */
/*   Updated: 2020/09/09 18:03:13 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		count;
	t_list	*temp;
	t_list	*curr;

	if (!begin_list)
		return ;
	size = 1;
	temp = begin_list;
	while ((temp = temp->next))
		size++;
	while (--size)
	{
		count = 0;
		curr = begin_list;
		while (count++ < size)
		{
			temp = curr->data;
			curr->data = curr->next->data;
			curr->next->data = temp;
			curr = curr->next;
		}
	}
}
