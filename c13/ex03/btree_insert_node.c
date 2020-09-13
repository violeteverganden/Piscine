/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:40:49 by diwata            #+#    #+#             */
/*   Updated: 2020/09/13 22:38:02 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_node(t_btree *root, void *item)
{
	t_btree	*temp;
	t_btree	*curr;
	t_btree	*pare;

	if (!(temp = btree_create_node(item)))
		return ;
	curr = root;
	pare = NULL;
	while (1)
	{
		pare = curr;
		if (*(int *)item < *(int *)pare->item)
		{
			curr = curr->left;
			if (!curr)
			{
				pare->left = temp;
				return ;
			}
		}
		else
		{
			curr = curr->right;
			if (!curr)
			{
				pare->right = temp;
				return ;
			}
		}
	}
}
