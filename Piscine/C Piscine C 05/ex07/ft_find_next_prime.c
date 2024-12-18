/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:09:52 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 21:09:54 by glancell         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*

int main(void)
{
	int num;
	num = 10;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));

	num = 1;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));

	num = 14;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));

	num = 20;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));

	num = 25;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));

	num = 17;
	printf("Next prime after %d is %d\n", num, ft_find_next_prime(num));
}
*/
