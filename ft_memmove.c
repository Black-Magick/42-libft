/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:21 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 15:15:12 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = dst;
	if (source < destination)
	{
		while (n--)
		{
			destination[n] = source[n];
		}
	}
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
