/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ram-ferre <ram-ferre@student.42lisboa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:41:11 by ram-ferre         #+#    #+#             */
/*   Updated: 2023/03/18 18:20:21 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= INT_MAX && nb >= INT_MIN)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(-54435344);
	return (0);
}*/
