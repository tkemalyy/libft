/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:40:44 by dgodovan          #+#    #+#             */
/*   Updated: 2024/04/22 21:11:02 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		if (src_len < size - 1)
			copy_len = src_len;
		else
			copy_len = size - 1;
		ft_memcpy(dest, src, copy_len);
		dest[copy_len] = '\0';
	}
	return (src_len);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[]= "AAABBBCCCCZZZZZ";
// 	char str2[]= "";
// 	char str3[15];
// 	char str4[15]= "";
//     printf("%d\n", ft_strlcpy(str3, str1, 15));
// 	printf("%d\n", ft_strlcpy(str4, str2, 0));
// 	puts(str3);
// 	puts(str4);
// }
