/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:09:02 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/21 17:11:16 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	count_digits(long nb);
static void		reverse_str(char *s, size_t start);

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	long	nb;

	i = 0;
	nb = n;
	s = malloc(count_digits(n) + 1);
	if (s == NULL)
		return (NULL);
	if (nb == 0)
		s[i++] = '0';
	if (nb < 0)
	{
		s[i++] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	s[i] = '\0';
	reverse_str(s, n < 0);
	return (s);
}

static size_t	count_digits(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	reverse_str(char *s, size_t start)
{
	size_t	end;
	char	temp;

	end = ft_strlen(s) - 1;
	while (start < end)
	{
		temp = s[start];
		s[start++] = s[end];
		s[end--] = temp;
	}
}
