/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:10:57 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/21 19:11:18 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;
	size_t	size;

	i = ft_strlen(s);
	if (start >= i)
	{
		nstr = malloc(1);
		if (nstr == NULL)
			return (NULL);
		nstr[0] = '\0';
		return (nstr);
	}
	if (len > i - start)
		size = i - start + 1;
	else
		size = len + 1;
	nstr = malloc(size);
	if (nstr == NULL)
		return (NULL);
	ft_strlcpy(nstr, s + start, size);
	return (nstr);
}
