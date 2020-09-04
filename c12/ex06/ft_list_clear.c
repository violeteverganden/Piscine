/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:27:33 by diwata            #+#    #+#             */
/*   Updated: 2020/09/04 13:09:04 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list)
	{
		free_fct((begin_list->data));
		printf("data : %p\n", begin_list->data);
		temp = begin_list;
		free(temp);
		printf("elem : %p\n", temp);
		begin_list = begin_list->next;
	}
}
