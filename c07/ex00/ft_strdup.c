/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 07:18:11 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 10:33:24 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *ptr, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
}

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;

	size = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, src);
	ptr[size] = '\0';
	return (ptr);
}
