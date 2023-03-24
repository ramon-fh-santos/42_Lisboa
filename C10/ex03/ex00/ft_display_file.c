/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:14:06 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/22 23:14:14 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *filename)
{
	int		fd;
	int		length;
	char	buffer[256];

	length = 1;
	fd = open(filename, O_RDONLY);
	while (length > 0)
	{
		length = read(fd, buffer, 256);
		write(1, buffer, length);
	}
	close(fd);
}
