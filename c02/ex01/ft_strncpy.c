/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:21:27 by ramferre          #+#    #+#             */
/*   Updated: 2023/03/07 23:21:29 by ramferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i]) && i < n)
	{
		dest[i] = src[i]);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	dest[] = "                                   ";
	char	*src;
	int		size;

	size = 30;
	src = "passsssssseiiiii na 42";
//	printf(".%s.\n\n", ft_strncpy(dest, src, size));
	printf(".%s.\n\n", strncpy(dest, src, size));
}
*/
