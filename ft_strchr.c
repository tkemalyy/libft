/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:48:46 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:48:47 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	if (c == 0)
	{
		i = ft_strlen((char *)s);
		return ((char *)&s[i]);
	}
	i = 0;
	while (s[i])
	{
		if ((char) c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main () {
//    const char str[] = "";
//    const char ch = '.';
//    char *ret;
//    ret = ft_strchr(str, ch);
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }
