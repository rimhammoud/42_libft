/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:27:45 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/21 19:10:08 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	nstr = malloc(len + 1);
	if (nstr == NULL)
		return (NULL);
	nstr[0] = '\0';
	ft_strlcpy(nstr, s1, len + 1);
	ft_strlcat(nstr, s2, len + 1);
	return (nstr);
}
