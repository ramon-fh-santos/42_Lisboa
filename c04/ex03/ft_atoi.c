/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ram-ferre <ram-ferre@student.42lisboa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:57:04 by ram-ferre         #+#    #+#             */
/*   Updated: 2023/03/18 13:58:50 by ram-ferre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sinal *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultado = resultado * 10 + str[i] - 48;
		i++;
	}
	return (resultado * sinal);
}
/*int	main(void)
{
	char	*str;
	int	i  = ft_atoi("---+++-+-+2147483650g1ds818");
	printf("%d", i);
	return (0);
}*/
