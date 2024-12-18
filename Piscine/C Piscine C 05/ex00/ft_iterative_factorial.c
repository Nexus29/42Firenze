/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:53:26 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 20:53:30 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}
/*
int main(void)
{
	int num;

	num = 5;
	printf("Factorial of %d is %d\n", num, ft_iterative_factorial(num));

	num = 0;
	printf("Factorial of %d is %d\n", num, ft_iterative_factorial(num));

	num = -5;
	printf("Factorial of %d is %d\n", num, ft_iterative_factorial(num));

	num = 10;
	printf("Factorial of %d is %d\n", num, ft_iterative_factorial(num));
}
*/
