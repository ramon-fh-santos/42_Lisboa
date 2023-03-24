/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:52:06 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/04 15:59:18 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '9';
	while (digit <= '0')
	{
		write (1, &digit, 1);
		digit++;
	}
}
int	main(void)
{
	ft_print_numbers();
	return(0);
}
