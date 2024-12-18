/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:23:35 by glancell          #+#    #+#             */
/*   Updated: 2024/11/06 17:23:37 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i <= n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char *str1 = "Hello, world!";
	char *str2 = "Hello, world!";
	char *str3 = "Hello, Universe!";
	char *str4 = "Hello";

	// Test con due stringhe uguali e n uguale alla lunghezza
	if (ft_strncmp(str1, str2, 13) == 0)
		write(1, "str1 e str2 sono uguali (n=13)\n", 31);
	else
		write(1, "str1 e str2 sono diversi (n=13)\n", 32);

	// Test con due stringhe diverse
	if (ft_strncmp(str1, str3, 13) == 0)
		write(1, "str1 e str3 sono uguali (n=13)\n", 31);
	else
		write(1, "str1 e str3 sono diversi (n=13)\n", 32);

	// Test con n più piccolo della lunghezza delle stringhe
	if (ft_strncmp(str1, str3, 5) == 0)
		write(1, "str1 e str3 sono uguali (n=5)\n", 30);
	else
		write(1, "str1 e str3 sono diversi (n=5)\n", 31);

	// Test con n più piccolo della lunghezza della prima stringa
	if (ft_strncmp(str1, str4, 5) == 0)
		write(1, "str1 e str4 sono uguali (n=5)\n", 30);
	else
		write(1, "str1 e str4 sono diversi (n=5)\n", 31);

	return 0;
}
*/
