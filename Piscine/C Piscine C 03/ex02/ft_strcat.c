/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:26:04 by glancell          #+#    #+#             */
/*   Updated: 2024/11/06 17:26:07 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main()
{
	// Definizione delle stringhe di test
	char dest[50] = "Ciao, ";
	char src[] = "come va?";

	// Chiamata alla funzione ft_strcat
	ft_strcat(dest, src);

	// Stampa il risultato
	printf("Stringa concatenata: %s\n", dest);

	return 0;
}
*/
