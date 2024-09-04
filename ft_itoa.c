/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgodovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:09:16 by dgodovan          #+#    #+#             */
/*   Updated: 2024/07/01 13:09:19 by dgodovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_len(int n)
{
	size_t	signes;

	signes = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		signes++;
	while (n)
	{
		n /= 10;
		signes++;
	}
	return (signes);
}

static char	ft_digits(int n)
{
	const char	*digits;

	digits = "0123456789";
	return (digits[n]);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;

	len = ft_number_len(n);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--len] = ft_digits(n % 10);
		n /= 10;
	}
	return (str);
}
// #include <stdio.h>
// int main() {
//     int n = -0;
//     printf("%s" , ft_itoa(n));
//     return 0;
// }
