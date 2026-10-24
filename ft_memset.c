/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:29:46 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/14 17:19:56 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
