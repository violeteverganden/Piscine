/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:11:13 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 21:11:16 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	len;

	tmp = begin_list;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	if (len < nbr)
		return (NULL);
	while (nbr--)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
