/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:54:07 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:51:55 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*new_node;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	lst_new = 0;
	while (ptr != NULL)
	{
		new_node = ft_lstnew(f(ptr->content));
		if (!new_node)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, new_node);
		ptr = ptr->next;
	}
	return (lst_new);
}
