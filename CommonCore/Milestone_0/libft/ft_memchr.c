/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:55:58 by glancell          #+#    #+#             */
/*   Updated: 2024/11/24 21:52:06 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     const char buffer[] = "Ciao, mondo!";
//     unsigned char byte_to_find = '1';
//     void *result = ft_memchr(buffer, byte_to_find, sizeof(buffer));
//     printf("%p\n", result);
// }
