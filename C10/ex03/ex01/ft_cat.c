/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:30:37 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/22 23:30:40 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	exception_handler(char *filename, char *binary_name)
{
	write(2, basename(binary_name), ft_strlen(basename(binary_name)));
	write(2, ": ", 2);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	ft_putstr(strerror(errno), 2);
	write(2, "\n", 1);
}

void	display_file(int fd)
{
	int		length;
	char	buffer[16384];

	length = 1;
	while (length > 0)
	{
		length = read(fd, buffer, 16384);
		write(1, buffer, length);
	}
	close(fd);
}
