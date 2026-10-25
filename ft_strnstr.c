/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:16:49 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/20 20:45:35 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	pos;
	size_t	j;

	pos = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (pos < len && s1[pos] != '\0')
	{
		j = 0;
		while (j < len - pos && s1[pos + j] != '\0'
			&& s2[j] == s1[pos + j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[pos]);
		}
		pos++;
	}
	return (0);
}
