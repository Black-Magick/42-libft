/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:52 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:48:56 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (!str || !f)
		return ;
	if (str && f)
	{
		while (str[index])
		{
			f(index, &str[index]);
			index++;
		}
	}
}
