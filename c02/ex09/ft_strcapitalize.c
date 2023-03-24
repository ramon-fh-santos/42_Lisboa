/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:26:09 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/07 23:26:10 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
/*char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";

	printf(".%s.\n", ft_strcapitalize(str));
}
*/
