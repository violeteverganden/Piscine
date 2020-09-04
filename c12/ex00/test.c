/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 14:52:44 by diwata            #+#    #+#             */
/*   Updated: 2020/09/02 16:08:06 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	pass_str(t_list *elem)
{
	char	*str;

	str = "42";
	elem = ft_create_elem(str);
	printf("elem : %p\n", elem);
	printf("elem.next : %p\n", elem->next);
	printf("elem.data : %p\n", elem->data);
	printf("elem.data.str : %s\n", elem->data);
	printf("elem.data.int : %d\n", *((int*)elem->data));
	putchar('\n');
}

void	pass_int(t_list *elem)
{
	int		nbr;

	nbr = 42;
	elem = ft_create_elem(&nbr);
	printf("elem : %p\n", elem);
	printf("elem.next : %p\n", elem->next);
	printf("elem.data : %p\n", elem->data);
	printf("elem.data.str : %s\n", elem->data);
	printf("elem.data.int : %d\n", *((int*)elem->data));
	putchar('\n');
}

int		main(void)
{
	t_list	*elem;

	elem = NULL;
	pass_str(elem);
	pass_int(elem);
}
