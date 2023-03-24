/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:07:23 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/22 23:09:39 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	exception_handler(char *filename, char *binary_name)
{
	write(STDERR, basename(binary_name), ft_strlen(basename(binary_name)));
	write(STDERR, ": ", 2);
	write(STDERR, filename, ft_strlen(filename));
	write(STDERR, ": ", 2);
	ft_putstr(strerror(errno), STDERR);
	write(STDERR, "\n", 1);
}

char	*process_file(int fd)
{
	char	buffer[1024];
	int		length;
	char	*content;

	content = malloc(sizeof(char) * 1);
	if (!content)
		return (NULL);
	content[0] = 0;
	length = 1;
	while (length > 0)
	{
		length = read(fd, buffer, 1024);
		if (length > 0)
			content = ft_strncat_malloc(content, buffer, length);
	}
	return (content);
}

void	ft_tail(int count, int fd)
{
	char	*content;

	content = process_file(fd);
	if (count > ft_strlen(content))
		count = ft_strlen(content);
	while (content[ft_strlen(content) - count])
		write(1, &content[ft_strlen(content) - count--], 1);
}

void	file_headers(char *filename, int argc, int firstFileIdx, int idx)
{
	if (idx != firstFileIdx)
		write(1, "\n", 1);
	if (firstFileIdx + 1 < argc)
	{
		write(1, "==> ", 4);
		ft_putstr(filename, 1);
		write(1, " <==\n", 5);
	}
}
