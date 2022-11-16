/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:04:32 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:56:41 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*pointer;

	index = 0;
	if (!lst)
		return (0);
	pointer = lst;
	while (pointer != NULL)
	{
		index++;
		pointer = pointer->next;
	}
	return (index);
}
