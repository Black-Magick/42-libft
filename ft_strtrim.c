/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:54:02 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:56:50 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	index_end;

	if (!str || !set)
		return (0);
	while (*str && ft_strchr(set, *str))
		str++;
	index_end = ft_strlen(str);
	while (index_end > 0 && ft_strchr(set, str[index_end]))
		index_end--;
	return (ft_substr(str, 0, index_end + 1));
}
