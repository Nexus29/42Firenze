/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:46:37 by glancell          #+#    #+#             */
/*   Updated: 2024/11/24 21:47:57 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p++ = c;
	}
	return (s);
}
// #include <stdio.h>
// int main() {
// 	char buffer[10];
// 	ft_memset(buffer, '0', sizeof(buffer));

// 	printf("Buffer dopo memset: %s\n", buffer);
// 	return 0;
// }