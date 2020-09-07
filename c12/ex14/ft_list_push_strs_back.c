/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:35:24 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 13:37:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs_back(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*curr;
	t_list	*last;

	if (size <= 0 || !strs)
		return (NULL);
	begin_list = ft_create_elem(*strs++);
	if (size-- == 1)
		return (begin_list);
	curr = begin_list;
	last = curr->next;
	while (size--)
	{
		last = ft_create_elem(*strs++);
		curr->next = last;
		curr = last;
	}
	return (begin_list);
}
