/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:56:23 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 20:57:13 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	range;
	unsigned int	i;
	int				*array;

	if (min >= max)
		return (NULL);
	range = max - min;
	array = (int *)malloc(sizeof(int) * range);
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
