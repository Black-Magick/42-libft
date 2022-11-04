/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:29 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 15:01:08 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	character;
	size_t			index;
	unsigned char	*string;

	character = (unsigned char)c;
	index = 0;
	string = (unsigned char *)s;
	while (index < n)
	{
		if (*string == character)
			return (string);
		string++;
		index++;
	}
	return (NULL);
}
