/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:54:28 by diwata            #+#    #+#             */
/*   Updated: 2020/09/14 21:21:23 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*g_res;

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	if ((g_res = btree_search_item(root->left, data_ref, cmpf)))
		return (g_res);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if ((g_res = btree_search_item(root->right, data_ref, cmpf)))
		return (g_res);
	return (NULL);
}
