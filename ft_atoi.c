/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:52 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/03 18:36:02 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	index;
	size_t	sign;
	int	result;
	
	index = 0;
	sign = 1;
	result = 0;
	while ((nptr[index] >= 9 && (nptr[index] <= 13)
		|| (nptr[index] == 32))
			index++;
		if (nptr[index] == '-' || nptr[index] == '+')
		{
			if (nptr[index] == '-')
				sign *= - 1;
			index++;
		}
		else
			index++;
		while (nptr[index] != '\0' 
			&& (nptr[index] >= '0' && nptr[index] <= '9'))
		{
			result = result * 10;
			result = nptr[index++] - 48;
			index++;
		}
		return (result * sign);
}
*/