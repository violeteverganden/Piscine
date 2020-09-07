/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 07:27:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/07 09:34:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*obje;
	t_list	*curr;

	obje = *begin_list;
	curr = obje->next;
	printf("first\n");
	printf("obje data : %s\n", obje->data);
	printf("obje next : %p\n", obje->next);
	printf("curr data : %s\n", curr->data);
	printf("curr next : %p\n", curr->next);
	putchar('\n');
	while (obje->next)
	{
		curr = obje->next;
		while (curr)
		{
			if (cmp(obje->data, curr->data) > 0)
			{
				obje->next = curr->next;
				curr->next = obje;
				printf("in sort\n");
				printf("obje data : %s\n", obje->data);
				printf("obje next : %p\n", obje->next);
				printf("curr data : %s\n", curr->data);
				printf("curr next : %p\n", curr->next);
				putchar('\n');
				*begin_list = obje;
				obje = curr;
			}
			curr = curr->next;
			printf("next element\n");
			printf("obje data : %s\n", obje->data);
			printf("obje next : %p\n", obje->next);
			printf("curr addr : %p\n", curr);
			putchar('\n');
		}
		obje = obje->next;
	}
	printf("final\n");
	printf("1st data : %s\n", (*begin_list)->data);
	printf("1st next : %p\n", (*begin_list)->next);
	printf("2nd data : %s\n", (*begin_list)->next->data);
	printf("sorted\n");
}
