/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:32:47 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 11:48:47 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		ft_is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

void	ft_split_str(char **result, char *str, char *charset, int len_parent)
{
	int i;
	int len;

	i = 0;
	while (i < len_parent)
	{
		while (ft_is_in_charset(*str, charset))
			str++;
		len = 0;
		while (str[len] && !ft_is_in_charset(str[len], charset))
			len++;
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!result[i])
			return ;
		ft_strncpy(result[i++], str, len);
		str += len;
	}
}

int		ft_count_splited_words(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		while (ft_is_in_charset(*str, charset))
			str++;
		if (!*str)
			break ;
		count++;
		while (*str && !ft_is_in_charset(*str, charset))
			str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		len_parent;

	if (!*str)
		return (NULL);
	len_parent = ft_count_splited_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (len_parent + 1));
	if (!result)
		return (NULL);
	result[len_parent] = NULL;
	ft_split_str(result, str, charset, len_parent);
	return (result);
}
