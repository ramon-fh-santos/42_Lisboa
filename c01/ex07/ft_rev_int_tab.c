/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:00:28 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/08 18:38:07 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	while (a < size)
	{
		i = tab[size - 1 - a];
		tab[size - 1 - a] = tab[a];
		tab[a] = i;
		a++;
		if (a >= size - 1 - a)
		{
			break ;
		}
	}	
}

int main() {
    int size = 5;
    int tab[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Antes de inverter: ");
    for (i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Depois de inverter: ");
    for (i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

