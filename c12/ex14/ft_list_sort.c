/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 07:27:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/09 10:50:11 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*begin_sort;
	t_list	*obje;
	void	*temp;

	if (!begin_list || !*begin_list || !(*begin_list)->next)
		return ;
	begin_sort = *begin_list;
	while (begin_sort->next)
	{
		obje = begin_sort;
		while (obje)
		{
			if (cmp(begin_sort->data, obje->data) > 0)
			{
				temp = begin_sort->data;
				begin_sort->data = obje->data;
				obje->data = temp;
			}
			obje = obje->next;
		}
		begin_sort = begin_sort->next;
	}
}
