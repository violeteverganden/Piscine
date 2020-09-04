/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:34:57 by diwata            #+#    #+#             */
/*   Updated: 2020/08/12 07:42:10 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
			continue ;
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
			continue ;
		}
		else
			return (0);
	}
	return (1);
}
