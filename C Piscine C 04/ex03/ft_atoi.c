/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:45:37 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 13:45:44 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		i;
	int		mult;
	int		nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}
/*
int main()
{
    char *str1 = "   -12345abc";
    char *str2 = "42";
    char *str3 = "   +987654321";
    char *str4 = "   -42";
    
    printf("Stringa: \"%s\", atoi: %d\n", str1, ft_atoi(str1));  
    printf("Stringa: \"%s\", atoi: %d\n", str2, ft_atoi(str2));  // Atteso: 42
    printf("Stringa: \"%s\", atoi: %d\n", str3, ft_atoi(str3)); 
    printf("Stringa: \"%s\", atoi: %d\n", str4, ft_atoi(str4));  // Atteso: -42
}
*/
