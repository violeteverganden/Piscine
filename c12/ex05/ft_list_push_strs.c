/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 09:35:24 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 10:24:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*tmp;
	t_list	*new;

	if (size <= 0)
		return (NULL);
	while (size--)
	{
		new = ft_create_elem(*strs++);
		new->next = tmp;
		tmp = new;
	}
	return (new);
}
