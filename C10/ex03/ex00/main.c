/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:14:29 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/22 23:14:32 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *filename);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (-1);
	}
	close(fd);
	display_file(argv[1]);
}
