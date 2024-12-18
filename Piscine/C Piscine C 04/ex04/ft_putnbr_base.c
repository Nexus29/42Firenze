/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:47:14 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 13:47:17 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*error = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		error;
	long	nb;

	lbase = 0;
	error = 0;
	ft_error(base, &error);
	nb = nbr;
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}
/*
int main()
{
    char *base1 = "01";      // Base binaria (2)
    char *base2 = "0123456789ABCDEF";  // Base esadecimale (16)
    char *base3 = "poneyvif";   // Base arbitraria (7 simboli)

    int num1 = 42;
    int num2 = -255;
    int num3 = 1000;

    // Test con base binaria
    write(1, "Numero 42 in base 2: ", 21);
    ft_putnbr_base(num1, base1);
    write(1, "\n", 1);

    // Test con base esadecimale
    write(1, "Numero -255 in base 16: ", 24);
    ft_putnbr_base(num2, base2);
    write(1, "\n", 1);

    // Test con una base arbitraria
    write(1, "Numero 1000 in base poneyvif: ", 30);
    ft_putnbr_base(num3, base3);
    write(1, "\n", 1);
}
*/
