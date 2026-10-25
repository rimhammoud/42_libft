/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:48:47 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/23 12:45:06 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	count_words(char const *s, char c);
static int		allocate(char **result, char const *s, size_t count, char c);
static void		copy_words(char **result, char const *s, char c, size_t wcount);

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	char	**result;

	wcount = count_words(s, c);
	result = malloc((wcount + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (!allocate(result, s, wcount, c))
	{
		free(result);
		return (NULL);
	}
	copy_words(result, s, c, wcount);
	return (result);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	allocate(char **result, char const *s, size_t count, char c)
{
	size_t	i;
	size_t	start;
	size_t	x;

	i = 0;
	x = 0;
	while (x < count)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		result[x] = malloc(i - start + 1);
		if (result[x] == NULL)
		{
			while (x > 0)
				free(result[--x]);
			return (0);
		}
		x++;
	}
	return (1);
}

static void	copy_words(char **result, char const *s, char c, size_t wcount)
{
	size_t	x;
	size_t	y;
	size_t	i;

	i = 0;
	x = 0;
	while (x < wcount)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		y = 0;
		while (s[i] && s[i] != c)
			result[x][y++] = s[i++];
		result[x][y] = '\0';
		x++;
	}
	result[x] = NULL;
}
