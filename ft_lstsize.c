/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:04:32 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/10 12:32:18 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	index;

	index = 0;
	if (!lst)
		return (0);
	t_list *pointer;
	pointer = lst;
	while (pointer != NULL)
	{
		index++;
		pointer = pointer->next;
	}
	return (index);
}