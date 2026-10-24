/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:41:43 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/21 19:09:51 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	return (str);
}
