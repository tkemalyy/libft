/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:11:17 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:11:20 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if (!dest && !src)
		return (NULL);
	len = 0;
	if (src < dest)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *) dest)[len] = ((unsigned char *) src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *) dest)[len] = ((unsigned char *) src)[len];
			len++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>

int main()
{
	char str1[20] = "Hello, World";

	printf( "The string: %s\n", str1 );
    ft_memmove( str1 + 2, str1, 5 * sizeof(char) );
    printf( "New string: %s\n", str1 );
}
*/
