/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:11:38 by diwata            #+#    #+#             */
/*   Updated: 2020/09/13 18:32:39 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int ac, char **av)
{
	t_btree	*node;

	node = btree_create_node(av[ac - 1]);
	printf("node item : %s\n", node->item);
	free(node);
}
