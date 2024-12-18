/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:04:30 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 21:04:32 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci_recur(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (ft_fibonacci_recur(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_recur(index, 0, 1));
}
/*
int main(void)
{
	int index;
	index = 0;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));

	index = 1;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));

	index = 5;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));

	index = 10;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));

	index = 15;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));

	index = 20;
	printf("Fibonacci of %d is %d\n", index, ft_fibonacci(index));
}
*/
