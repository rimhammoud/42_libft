/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:40:25 by rihammou          #+#    #+#             */
/*   Updated: 2026/10/22 12:59:17 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*new;
	void	*content;

	nlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, new);
		lst = lst->next;
	}
	return (nlst);
}
