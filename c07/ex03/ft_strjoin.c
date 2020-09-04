/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:30:12 by diwata            #+#    #+#             */
/*   Updated: 2020/08/20 21:14:10 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *result, char **strs, char *sep, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (strs[i][j])
			*result++ = strs[i][j++];
		k = 0;
		while (sep[k])
			*result++ = sep[k++];
		i++;
	}
	j = 0;
	while (strs[i][j])
		*result++ = strs[i][j++];
	*result = '\0';
}

int		ft_find_result_length(char **strs, char *sep, int size)
{
	int i;
	int j;
	int len_result;
	int len_sep;

	i = 0;
	len_result = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len_result += j;
		i++;
	}
	len_sep = 0;
	while (sep[len_sep])
		len_sep++;
	len_result += len_sep * (size - 1);
	return (len_result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = ft_find_result_length(strs, sep, size);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strcat(result, strs, sep, size);
	return (result);
}
