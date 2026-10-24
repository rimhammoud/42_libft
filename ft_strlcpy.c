/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:42:16 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/09 12:46:16 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (size > 1 && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
		size--;
	}
	if (size > 0)
		dest[len] = '\0';
	while (src[len] != 0)
		len++;
	return (len);
}
