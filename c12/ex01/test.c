/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:17:50 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 11:50:57 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	add_elem(t_list **first)
{
	char	*str;

	str = "42";
	ft_list_push_front(first, str);
	printf("first  : %s\n", (*first)->data);
	printf("second : %s\n", (*first)->next->data);
}

void	create_first_elem(t_list **first)
{
	char	*str;

	str = "Tokyo";
	ft_list_push_front(first, str);
	printf("first  : %s\n", (*first)->data);
}

int		main(void)
{
	t_list	*first;

	first = NULL;
	create_first_elem(&first);
	add_elem(&first);
}
