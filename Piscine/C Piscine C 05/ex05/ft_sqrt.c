/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:06:39 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 21:06:42 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}
/*
int main(void)
{
	int nb;
	nb = 16;
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));

	nb = 25;
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));

	nb = 49;
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));

	nb = 2;
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));

	nb = 2147395600;  // Limite superiore per l'overflow
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));

	nb = 50;
	printf("Square root of %d is %d\n", nb, ft_sqrt(nb));
}
*/
