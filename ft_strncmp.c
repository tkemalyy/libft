/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:33:12 by dgodovan          #+#    #+#             */
/*   Updated: 2024/04/23 14:29:15 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n-- > 0)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	char	s1[] = "zzbb";
// 	char	s2[] = "zzbz";
// 	printf("%d\n", ft_strncmp(s1, s2, 4));
// }
