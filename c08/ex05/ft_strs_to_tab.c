/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 07:33:44 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 10:35:04 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int		i;
	int		size;

	if (!av)
		return (NULL);
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		result[i].size = size;
		result[i].str = av[i];
		result[i].copy = (char *)malloc(sizeof(char) * (size + 1));
		if (!result[i].copy)
			return (NULL);
		ft_strcpy(result[i].copy, result[i].str);
		i++;
	}
	result[i].str = NULL;
	ft_show_tab(result);
	return (result);
}
