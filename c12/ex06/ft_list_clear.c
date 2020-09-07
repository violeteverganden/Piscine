/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:27:33 by diwata            #+#    #+#             */
/*   Updated: 2020/09/05 10:34:45 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = begin_list;
	while (curr)
	{
		free_fct(curr->data);
		next = curr->next;
		curr->next = NULL;
		free(curr);
		curr = next;
	}
}
