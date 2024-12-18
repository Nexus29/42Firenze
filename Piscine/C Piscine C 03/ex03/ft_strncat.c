/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:51 by glancell          #+#    #+#             */
/*   Updated: 2024/11/06 17:02:53 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	// Definizione delle stringhe di test
	char dest[50] = "Ciao, ";  // Assicurati che ci sia spazio sufficiente
	char src[] = "come va?";

	ft_strncat(dest, src, 4);

	// Stampa il risultato
	printf("Stringa concatenata: %s\n", dest);
	return 0;
}
*/
