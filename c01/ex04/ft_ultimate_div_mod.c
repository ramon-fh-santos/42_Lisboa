/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:59:32 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/06 21:59:35 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

/*int	main(void)
{
	int	x;
	int	y;
	
	x=5;
	y=6;
	
	ft_ultimate_div_mod(&x, &y);
	printf("%d %d", x, y);
	return(0);
}
*/
