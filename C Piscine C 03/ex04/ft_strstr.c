/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:30:28 by glancell          #+#    #+#             */
/*   Updated: 2024/11/06 17:30:31 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temp;

	temp = str;
	if (*to_find == '\0')
		return (str);
	while (*temp)
	{
		i = 0;
		if (*temp == to_find[0])
		{
			while (temp[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
/*
int main()
{
	// Stringhe di esempio
	char str[] = "Ciao, come va? Spero che tutto vada bene!";
	char to_find[] = "come";

	// Chiamata alla funzione ft_strstr per cercare la sottostringa
	char *result = ft_strstr(str, to_find);

	// Verifica e stampa il risultato
	if (result)
	{
		printf("Sottostringa trovata: %s\n", result);
	}
	else
	{
		printf("Sottostringa non trovata.\n");
	}

	return 0;
}
*/
