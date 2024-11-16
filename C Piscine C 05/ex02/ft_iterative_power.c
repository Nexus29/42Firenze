/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:58:48 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 20:58:51 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
		nb *= n;
	return (nb);
}
/*
int main(void)
{
	int num;
	int power;

	num = 2;
	power = 3;
	printf("%d of %d is %d\n", num, power, ft_iterative_power(num, power));

	num = 5;
	power = 0;
	printf("%d of %d is %d\n", num, power, ft_iterative_power(num, power));

	num = 3;
	power = -2;
	printf("%d of %d is %d\n", num, power, ft_iterative_power(num, power));

	num = 4;
	power = 5;
	printf("%d of %d is %d\n", num, power, ft_iterative_power(num, power));
}
*/
