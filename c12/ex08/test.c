/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:17:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 20:45:53 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	display_list(t_list *first)
{
	printf("1st data: %s\n", first->data);
	printf("2nd data: %s\n", first->next->data);
	printf("3rd data: %s\n", first->next->next->data);
}

void	create_list(t_list **first)
{
	ft_list_push_front(first, "!");
	ft_list_push_front(first, "Tokyo");
	ft_list_push_front(first, "42");
	printf("1st data: %s\n", (*first)->data);
	printf("2nd data: %s\n", (*first)->next->data);
	printf("3rd data: %s\n", (*first)->next->next->data);
}

int		main(void)
{
	t_list	*first;

	first = NULL;
	create_list(&first);
	ft_list_reverse(&first);
	display_list(first);
}
