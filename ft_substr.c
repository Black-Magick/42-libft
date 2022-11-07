/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:53:59 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/07 12:43:00 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t lenght)
{
	char			*new_str;
	size_t			index;
	size_t			sub_start;

	index = 0;
	sub_start = start;
	if (start > ft_strlen(src))
	{	
		new_str = malloc(sizeof(char));
		*new_str = 0;
		return (new_str);
	}
	if (lenght >= ft_strlen(src))
		lenght = ft_strlen(src) - start;
	new_str = malloc(sizeof(char) * (lenght + 1));
	if (!new_str)
		return (NULL);
	while (start < ft_strlen(src) && index < lenght)
		new_str[index++] = src[sub_start++];
	new_str[index] = '\0';
	return (new_str);
}
