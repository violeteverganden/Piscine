/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:16:54 by diwata            #+#    #+#             */
/*   Updated: 2020/08/15 08:43:58 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long temp;
	long i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	temp = (unsigned int)nb;
	i = 1;
	while (nb > i * i)
		i++;
	if (nb == i * i)
		return (i);
	return (0);
}
