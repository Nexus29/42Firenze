/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:49:29 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 13:49:33 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
			|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base_test(char str, char *base)
{
	int	retour;
	int	i;

	retour = 0;
	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_search(char *str, int *i)
{
	int	mult;

	mult = 1;
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			mult *= -1;
		*i += 1;
	}
	return (mult);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mult;
	int	nb;
	int	tmp;
	int	len;

	nb = 0;
	i = 0;
	len = ft_atoi_base_error(base);
	if (len >= 2)
	{
		mult = ft_atoi_base_search(str, &i);
		tmp = ft_atoi_base_test(str[i], base);
		while (tmp != -1)
		{
			nb = (nb * len) + tmp;
			i++;
			tmp = ft_atoi_base_test(str[i], base);
		}
		return (nb *= mult);
	}
	return (0);
}
/*
int main() {
    char str[100];    // Stringa che conterrà il numero da convertire
    char base[17];    
    
    // Esempio di base: "0123456789ABCDEF" per base 16
    printf("Enter 0123456789 for base 10, 0123456789ABCDEF for base 16): ");
    scanf("%s", base);  // Legge la base
    
    // Verifica se la base è valida
    if (ft_atoi_base_error(base) < 2) {
        printf("Invalid base\n");
        return 1;  // Esce se la base non è valida
    }

    // Richiede l'input del numero da convertire
    printf("Enter the number as a string: ");
    scanf("%s", str);   // Legge il numero in base "base"

    // Converte il numero usando la funzione ft_atoi_base
    int result = ft_atoi_base(str, base);
    
    // Stampa il risultato
    printf("The converted number is: %d\n", result);
    
    return 0;
}
*/
