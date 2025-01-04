/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:42:51 by glancell          #+#    #+#             */
/*   Updated: 2024/11/25 18:58:53 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j] != '\0')
		j++;
	if (!size)
		return (j);
	i = 0;
	while ((src[i]) && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
//     char src[] = "Hello, world!";
//     char dst[10]; // Buffer di dstinazione di dimensione 10
//     size_t len = ft_strlcpy(dst, src, sizeof(dst));
//     printf("Dst: %s\n", dst);
//     printf("Length: %zu\n", len);
//     return 0;
// }