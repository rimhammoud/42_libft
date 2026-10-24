/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:12:00 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/16 15:19:55 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	j = 0;
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	if (size == 0 || i == size)
	{
		while (src[j] != '\0')
			j++;
		return (size + j);
	}
	len = i;
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	while (src[j] != '\0')
		j++;
	return (len + j);
}
