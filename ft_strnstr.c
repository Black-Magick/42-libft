/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:54:07 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 14:59:33 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	index_big;
	size_t	index_small;

	if (!*small)
		return ((char *)big);
	index_big = 0;
	while (big[index_big] && index_big < n)
	{
		if (big[index_big] == small[0])
		{
			index_small = 0;
			while (big[index_big + index_small] == small[index_small]
				&& index_big + index_small < n)
			{
				if (small[index_small + 1] == '\0')
					return ((char *)&big[index_big]);
				index_small++;
			}
		}
		index_big++;
	}
	return (0);
}
