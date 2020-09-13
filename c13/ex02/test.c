/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:33:39 by diwata            #+#    #+#             */
/*   Updated: 2020/09/13 22:38:04 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	display(void *item)
{
	printf("item : %d\n", *(int *)item);
}

int		main(void)
{
	t_btree	*root;
	int	tab[7] = {27, 14, 35, 10, 19, 31, 42};

	root = btree_create_node(&tab[0]);
	for (int i = 1; i < 7; i++)
		btree_insert_node(root, &tab[i]);
	btree_apply_infix(root, &display);
}
