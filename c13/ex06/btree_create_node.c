/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:07:53 by diwata            #+#    #+#             */
/*   Updated: 2020/09/13 19:20:07 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = malloc(sizeof(t_btree))))
		return (NULL);
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
