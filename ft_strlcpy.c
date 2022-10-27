/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:30 by remanuel          #+#    #+#             */
/*   Updated: 2022/10/27 12:54:50 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	ft_strlen(src);
	index = 0;
	if (size > 0)
	{
		while ((src[index] != '\0') && (index < (size - 1)))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(src));
}
