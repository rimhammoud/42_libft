/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:59:30 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/14 15:26:17 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*chr;

	i = 0;
	chr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			chr = (char *)&str[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (chr);
}
