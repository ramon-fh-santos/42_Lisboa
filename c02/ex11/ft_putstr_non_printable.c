/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:26:56 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/07 23:26:57 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*void	ft_putstr_non_printable(char *str);
void	ft_get_hex(int c, int first);
void	ft_putchar(char c);

int		main(void)
{
	char	*str;

	str = "Bon	jo\nur";
//	ft_putstr_non_printable(str);
	int i = -127;
	while (i <= 127)
	{
		ft_get_hex(i, 1);
		ft_putchar('\n');
		i++;
	}
}
*/
