/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_level.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:04:55 by diwata            #+#    #+#             */
/*   Updated: 2020/09/21 10:07:44 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_pop_first(t_list **queue)
{
	t_list	*first;

	first = *queue;
	*queue = (*queue)->next;
	free(first);
}

t_list	*ft_create_elem(t_btree *node, int level)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->level = level;
	elem->node = node;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_back(t_list **queue, t_btree *node, int level)
{
	t_list	*tmp;

	tmp = *queue;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_create_elem(node, level);
}

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int		level;
	t_list	*queue;
	t_btree	*first;

	if (!root)
		return ;
	queue = ft_create_elem(root, 0);
	level = -1;
	while (queue)
	{
		first = queue->node;
		if (first->left)
			ft_list_push_back(&queue, first->left, queue->level + 1);
		if (first->right)
			ft_list_push_back(&queue, first->right, queue->level + 1);
		if (level != queue->level)
			applyf(first->item, ++level, 1);
		else
			applyf(first->item, level, 0);
		ft_pop_first(&queue);
	}
}
