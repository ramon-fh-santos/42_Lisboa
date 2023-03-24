/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 23:38:29 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/22 23:38:31 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strncat(unsigned char *dest, unsigned char *src, int n)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen((char *)dest);
	while (i <= n)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
}

void	reset_string(unsigned char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		str[i] = 0;
		i++;
	}
}
