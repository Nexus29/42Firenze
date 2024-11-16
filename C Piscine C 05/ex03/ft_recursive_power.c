/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:59:19 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 20:59:21 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power_recur(int nb, int power, int n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recur(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recur(nb, power, nb));
}
/*
int main(void)
{
	int num;
	int power;

	num = 2;
	power = 3;
	printf("%d of %d is %d\n", num, power, ft_recursive_power(num, power));

	num = 5;
	power = 0;
	printf("%d of %d is %d\n", num, power, ft_recursive_power(num, power));

	num = 3;
	power = -2;
	printf("%d of %d is %d\n", num, power, ft_recursive_power(num, power));

	num = 4;
	power = 5;
	printf("%d of %d is %d\n", num, power, ft_recursive_power(num, power));
}
*/
