/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:33:55 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 14:24:10 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (!*to_find)
		return (str);
	i = 0;
	while (*str)
	{
		if (*str != to_find[i])
		{
			str++;
			continue ;
		}
		i = 0;
		while (to_find[i] && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}
