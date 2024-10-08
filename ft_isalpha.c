/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:04:51 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:05:02 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
// #include <stdio.h>
// int main(void)
// {
// 	char str1[]= "T";
// 	char str2[]= "~";
// 	printf("%d\n", ft_isalpha(str1));
// 	printf("%d\n", ft_isalpha(str2));
// }
