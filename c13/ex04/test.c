/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:33:39 by diwata            #+#    #+#             */
/*   Updated: 2020/09/14 09:43:26 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

#define SIZE 7

int		ft_intcmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

void	display(void *item)
{
	printf("item : %d\n", *(int *)item);
}

int		main(void)
{
	t_btree	*root;
	int	tab[SIZE] = {27, 14, 35, 10, 19, 31, 42};

	root = NULL;
	for (int i = 0; i < SIZE; i++)
	{
		printf("%dth insertion\n", i);
		btree_insert_data(&root, &tab[i], &ft_intcmp);
		btree_apply_prefix(root, &display);
//		btree_apply_infix(root, &display);
//		btree_apply_suffix(root, &display);
	}
}
