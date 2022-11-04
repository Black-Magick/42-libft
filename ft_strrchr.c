/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:54:05 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 15:12:30 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index_end;
	char	character;

	index_end = ft_strlen(s);
	character = (char)c;
	while (index_end >= 0)
	{
		if (s[index_end] == character)
			return (&((char *)s)[index_end]);
		index_end--;
	}
	return (0);
}
