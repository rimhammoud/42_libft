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

static size_t	count_words(char const *s, char c, size_t i);
static char		**allocate(char **result, char const *s, size_t count, char c);
static size_t	char_count(char const *s, char c, size_t start);
static void		copy_words(char **result, char const *s, char c, size_t wcount);

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	char	**result;

	wcount = count_words(s, c, 0);
	result = malloc((wcount + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (allocate(result, s, wcount, c) == NULL)
	{
		free(result);
		return (NULL);
	}
	copy_words(result, s, c, wcount);
	return (result);
}

static size_t	count_words(char const *s, char c, size_t i)
{
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

static char	**allocate(char **result, char const *s, size_t count, char c)
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
			return (NULL);
		}
		x++;
	}
	return (result);
}

static size_t	char_count(char const *s, char c, size_t start)
{
	size_t	count;

	count = 0;
	while (s[start] == c && s[start] != '\0')
		start++;
	while (s[start] != c && s[start] != '\0')
	{
		count++;
		start++;
	}
	return (count);
}

static void	copy_words(char **result, char const *s, char c, size_t wcount)
{
	size_t	x;
	size_t	y;
	size_t	i;
	size_t	chcount;

	i = 0;
	x = 0;
	y = 0;
	while (x < wcount)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		chcount = char_count(s, c, i);
		while (y < chcount)
			result[x][y++] = s[i++];
		result[x][y] = '\0';
		x++;
		y = 0;
	}
	result[x] = NULL;
}
