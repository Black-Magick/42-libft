/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:15 by remanuel          #+#    #+#             */
/*   Updated: 2022/11/16 10:46:56 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(fd, &str[index], 1);
		index++;
	}
	ft_putchar_fd(10, fd);
}
