/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:47 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/04 15:58:37 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_memb, size_t byte_size)
{
	void	*ptr;

	ptr = (void *)malloc(byte_size * n_memb);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', (byte_size * n_memb));
	return (ptr);
}
