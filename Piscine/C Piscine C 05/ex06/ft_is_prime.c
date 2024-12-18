/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:08:26 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 21:08:28 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int num;
	num = 2;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 3;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 4;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 5;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 10;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 13;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 25;
	printf("%d is prime: %d\n", num, ft_is_prime(num));

	num = 1;
	printf("%d is prime: %d\n", num, ft_is_prime(num));
}
*/
