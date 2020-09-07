/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 12:40:36 by diwata            #+#    #+#             */
/*   Updated: 2020/09/05 12:52:13 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	display_list(t_list *list)
{
	for (int i = 0; list; i++)
	{
		printf("%dth data: %s\n", i, list->data);
		list = list->next;
	}
}

void	create_src(t_list **src)
{
	ft_list_push_front(src, "Tokyo");
	ft_list_push_front(src, "42");
	printf("src 1st  : %s\n", (*src)->data);
	printf("src 2nd  : %s\n", (*src)->next->data);
}

void	create_dest(t_list **dest)
{
	ft_list_push_front(dest, "is");
	ft_list_push_front(dest, "this");
	printf("dest 1st : %s\n", (*dest)->data);
	printf("dest 2nd : %s\n", (*dest)->next->data);
}

int		main(void)
{
	t_list	*dest;
	t_list	*src;

	dest = NULL;
	src = NULL;
	create_dest(&dest);
	create_src(&src);
	ft_list_merge(&dest, src);
	display_list(dest);
}
