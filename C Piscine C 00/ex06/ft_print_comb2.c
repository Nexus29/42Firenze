/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:53:57 by glancell          #+#    #+#             */
/*   Updated: 2024/10/30 22:54:00 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	cifre(int a, int b, int c[])
{
	if (a >= 10)
	{
		c[0] = a / 10;
		c[1] = a - 10 * c[0];
	}
	else
	{
		c[0] = 0;
		c[1] = a;
	}
	if (b >= 10)
	{
		c[2] = b / 10;
		c[3] = b - 10 * c[2];
	}
	else
	{
		c[2] = 0;
		c[3] = b;
	}
}

void	multiple_putchar(int a, int b)
{
	int	c[4];

	cifre(a, b, c);
	ft_putchar(c[0] + 48);
	ft_putchar(c[1] + 48);
	ft_putchar(' ');
	ft_putchar(c[2] + 48);
	ft_putchar(c[3] + 48);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			multiple_putchar(a, b);
			b++;
		}
		a++;
	}
}
