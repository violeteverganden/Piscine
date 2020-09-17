/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:22:49 by diwata            #+#    #+#             */
/*   Updated: 2020/09/14 21:25:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int g_left_branch;
int g_right_branch;

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (-1);
	g_left_branch = btree_level_count(root->left) + 1;
	g_right_branch = btree_level_count(root->right) + 1;
	if (g_left_branch > g_right_branch)
		return (g_left_branch);
	else
		return (g_right_branch);
}
