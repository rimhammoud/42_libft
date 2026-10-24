/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:55:42 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/20 15:11:57 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	ncheck;
	int	nb;

	i = 0;
	ncheck = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ncheck = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	if (ncheck == 1)
		nb = -nb;
	return (nb);
}
