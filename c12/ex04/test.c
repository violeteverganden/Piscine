/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:05:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/06 13:20:07 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	add_dot(t_list **first)
{
	ft_list_push_back(first, ".");
	printf("1st data : %s\n", (*first)->data);
	printf("2nd data : %s\n", (*first)->next->data);
	printf("3rd data : %s\n", (*first)->next->next->data);
}

void	add_tokyo(t_list **first)
{
	ft_list_push_back(first, "Tokyo");
	printf("1st data : %s\n", (*first)->data);
	printf("2nd data : %s\n", (*first)->next->data);
}

void	create_first_elem(t_list **first)
{
	ft_list_push_back(first, "42");
	printf("1st data : %s\n", (*first)->data);
}

int		main(void)
{
	t_list *first;

	first = NULL;
	create_first_elem(&first);
	add_tokyo(&first);
	add_dot(&first);
}
