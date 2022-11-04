/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:37 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 15:11:31 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	index_src;
	size_t	index_dst;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	index_dst = dst_size;
	index_src = 0;
	if (n <= dst_size || n == 0)
		return (n + src_size);
	while ((index_dst + 1 < n) && src[index_src] != '\0')
	{
		dst[index_dst] = src[index_src];
		index_dst++;
		index_src++;
	}
	dst[index_dst] = '\0';
	return (dst_size + src_size);
}
