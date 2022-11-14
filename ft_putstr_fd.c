/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:06 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:39 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	index;
	index = 0;
	
	while (str[index] != '\0')
	{	
		write(fd, &str[index], 1);
		index++;
	}
}