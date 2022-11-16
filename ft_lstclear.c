/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:28:13 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:49:12 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*i;

	temp = *lst;
	i = NULL;
	while (temp != NULL)
	{
		i = temp->next;
		del(temp->content);
		free(temp);
		temp = i;
	}
	*lst = NULL;
}
