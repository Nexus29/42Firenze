/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:14:17 by glancell          #+#    #+#             */
/*   Updated: 2024/11/06 17:14:20 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "Hellz";
	char *str4 = "Hello, world!";

	// Test con due stringhe uguali
	if (ft_strcmp(str1, str2) == 0)
		write(1, "str1 e str2 sono uguali\n", 24);
	else
		write(1, "str1 e str2 sono diversi\n", 25);

	// Test con due stringhe diverse
	if (ft_strcmp(str1, str3) == 0)
		write(1, "str1 e str3 sono uguali\n", 24);
	else
		write(1, "str1 e str3 sono diversi\n", 25);

	// Test con una stringa più corta
	if (ft_strcmp(str1, str4) == 0)
		write(1, "str1 e str4 sono uguali\n", 24);
	else
		write(1, "str1 e str4 sono diversi\n", 25);

	return 0;
}
*/
