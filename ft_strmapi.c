/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:54:28 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:55:34 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*new_str;

	index = 0;
	new_str = ft_strdup(str);
	if (!str || !f)
		return (NULL);
	if (!new_str)
		return (NULL);
	while (new_str[index])
	{
		new_str[index] = f(index, new_str[index]);
		index++;
	}
	return (new_str);
}
