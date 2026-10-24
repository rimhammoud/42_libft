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
	size_t	i;
	size_t	pos;
	size_t	j;

	i = 0;
	j = 0;
	pos = 0;
	if (s2[0] == '\0')
		return ((char *)&s1[i]);
	while (pos < len && s1[pos] != '\0')
	{
		while (s2[j] == s1[i] && s1[i] != '\0' && i < len)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[pos]);
		}
		pos++;
		i = pos;
		j = 0;
	}
	return (0);
}
