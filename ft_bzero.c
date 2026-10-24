/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:14:55 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/14 16:23:02 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ;
}
