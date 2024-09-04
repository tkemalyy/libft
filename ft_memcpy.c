/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:01:57 by dgodovan          #+#    #+#             */
/*   Updated: 2024/05/20 20:01:59 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	if (!dest && !src)
		return (NULL);
	ptr_d = (unsigned char *) dest;
	ptr_s = (const unsigned char *) src;
	while (n--)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char str1[20] = "Hello, World";

	printf( "The string: %s\n", str1 );
    ft_memcpy( str1 + 2, str1, 5 * sizeof(char) );
    printf( "New string: %s\n", str1 );
}
*/