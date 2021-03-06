/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:35:24 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 09:51:45 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*prev;
	t_list	*curr;

	if (size <= 0)
		return (NULL);
	prev = NULL;
	while (size--)
	{
		curr = ft_create_elem(*strs++);
		curr->next = prev;
		prev = curr;
	}
	return (curr);
}
