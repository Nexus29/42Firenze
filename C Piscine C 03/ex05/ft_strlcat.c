/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:29:47 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 11:29:50 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 50;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Destination string after ft_strlcat: \"%s\"\n", dest);
    printf("Total length of string (expected): %u\n", result);
    printf("Destination string length: %lu\n", strlen(dest));

    return 0;
}*/
