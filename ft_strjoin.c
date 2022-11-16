/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:42 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:50:07 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str_1, const char *str_2)
{
	char	*new_str;
	size_t	index;
	size_t	index_new_str;

	index = 0;
	index_new_str = 0;
	new_str = malloc(sizeof(char) * (ft_strlen(str_1) + ft_strlen(str_2)) + 1);
	if (!new_str)
		return (NULL);
	while (str_1[index])
	{	
		new_str[index] = str_1[index];
		index++;
	}
	while (str_2[index_new_str])
		new_str[index++] = str_2[index_new_str++];
	new_str[index] = '\0';
	return (new_str);
}
