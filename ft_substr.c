/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:52:39 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:52:41 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		len_s;
	char		*substr;

	if (!s)
		return ((void *) 0);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup(""));
	substr = (char *) malloc ((len + 1) * sizeof(char));
	if (!substr)
		return ((void *) 0);
	i = 0;
	while (len-- && s[i + start] != '\0')
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
