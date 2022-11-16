/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:31 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:53:33 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_nr(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			size;
	long int	number;
	char		*str;

	number = n;
	size = digit_nr(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size > 0)
	{
		if (number < 0)
			number *= -1;
		str[--size] = number % 10 + 48;
		number /= 10;
	}
	if (str[0] == '0')
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}
