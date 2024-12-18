/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:43:14 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 13:43:17 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
    char *str = "Ciao, mondo!";
    int len = ft_strlen(str);

    printf("La lunghezza della stringa \"%s\" è: %d\n", str, len);
    return 0;
}
*/
