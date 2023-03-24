/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:01:01 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/06 22:05:21 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while ((i + 1) < size)
	{
		if (tab[i] > tab[i + 1])
		{	
			a = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = a;
			i = 0;
		}
		else
			i++;
	}
}

/*int	main()
{
    int tab[] = {5, 2, 9, 1, 7, 4};
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("Array antes da ordenação:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("Array após a ordenação:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
