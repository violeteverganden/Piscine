/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:01:38 by diwata            #+#    #+#             */
/*   Updated: 2020/08/19 21:10:50 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_d;
	unsigned int len_s;
	unsigned int len_result;
	unsigned int	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size < len_d)
		return (len_s + size);
	i = 0;
	while (src[i] && len_d + i + 1 < size)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	len_result = len_d + len_s;
	return (len_result);
}
