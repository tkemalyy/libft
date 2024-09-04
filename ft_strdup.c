/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:49:15 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:49:19 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dupl;
	unsigned int	lenght;

	lenght = ft_strlen(src);
	dupl = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!dupl)
		return (NULL);
	ft_strlcpy(dupl, src, lenght + 1);
	return (dupl);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "new string";
// 	char	*dest;

// 	dest = ft_strdup(str);
// 	printf("%s\n", dest);
// 	free(dest);
//	dest = NULL
// }
