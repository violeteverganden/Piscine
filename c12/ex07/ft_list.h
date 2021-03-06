/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:35:00 by diwata            #+#    #+#             */
/*   Updated: 2020/09/03 12:55:41 by daikiiwat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
int					ft_list_size(t_list *begin_list);
t_list				*ft_list_last(t_list *begin_list);
void				ft_list_push_back(t_list **begin_list, void *data);
t_list				*ft_list_push_strs(int size, char **strs);
void				ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
