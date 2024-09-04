/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:50:06 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:50:09 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total;
	char	*con_str;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	con_str = (char *) malloc ((total + 1) * sizeof(char));
	if (!con_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		con_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		con_str[i + j] = s2[j];
		j++;
	}
	con_str[i + j] = '\0';
	return (con_str);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *str1= "AAABBBC";
// 	char *str2= "qqq   1";
// 	char *str3 = ft_strjoin(str1, str2);
//     printf("%s\n",str3);
// 	free(str3);
// }
