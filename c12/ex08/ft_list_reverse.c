/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:11:41 by diwata            #+#    #+#             */
/*   Updated: 2020/09/05 12:11:37 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	prev = NULL;
	curr = *begin_list;
	next = curr->next;
	while (next)
	{
		curr->next = prev;
		prev = curr;
		curr = next;
		next = curr->next;
	}
	curr->next = prev;
	*begin_list = curr;
}
