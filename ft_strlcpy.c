/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:55:30 by remanuel          #+#    #+#             */
/*   Updated: 2022/10/26 18:11:30 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size == 0)
	{
		while (src[index] != '\0')
			index++;
		return (index);
	}
	while (src[index] != '\0' && index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	if (index < size)
		dst[index] = '\0';
	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}

int	main()
{
	char *str2 = "Mann";
	char *str1 = "FUGG";
	size_t i = 0;

	i = ft_strlcpy(str1, str2, 2);
	printf("%ld | %s", i, str1);
	return (0);
}