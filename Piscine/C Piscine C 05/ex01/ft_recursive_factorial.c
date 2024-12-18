/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:55:52 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 20:55:55 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i >= 0)
		return (ft_recursive_factorial_recur(i - 1, n * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_recur(nb, 1));
}
/*
int main(void)
{
	int num;

	num = 5;
	printf("Factorial of %d is %d\n", num, ft_recursive_factorial(num));

	num = 0;
	printf("Factorial of %d is %d\n", num, ft_recursive_factorial(num));

	num = -5;
	printf("Factorial of %d is %d\n", num, ft_recursive_factorial(num));

	num = 10;
	printf("Factorial of %d is %d\n", num, ft_recursive_factorial(num));
}
*/
