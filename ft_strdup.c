/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:58 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:47:15 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*new_str;

	index = ft_strlen(src) + 1;
	new_str = malloc(sizeof(char) * index);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, src, index);
	return (new_str);
}
