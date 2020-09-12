/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 18:22:44 by diwata            #+#    #+#             */
/*   Updated: 2020/09/12 18:58:34 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	display_list(t_list *list)
{
	int		i;

	i = 0;
	while (list)
	{
		printf("%dth : %s\n", i++, list->data);
		list = list->next;
	}
}

int		main(int ac, char **av)
{
	t_list	*dst;
	t_list	*src;
	char	*strs[3];

	ac--;
	av++;
	printf("dst\n");
	dst = ft_list_push_strs_back(ac, av);
	ft_list_sort(&dst, &ft_strcmp);
	display_list(dst);
	strs[0] = "Tokyo";
	strs[1] = "42";
	strs[2] = NULL;
	printf("src\n");
	src = ft_list_push_strs_back(2, strs);
	ft_list_sort(&src, &ft_strcmp);
	display_list(src);
	printf("result\n");
	ft_sorted_list_merge(&dst, src, &ft_strcmp);
	display_list(dst);
}
