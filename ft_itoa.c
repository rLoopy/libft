/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:51:09 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count_digits(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	i = len - 1;
	while (n)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}

// int -> string
// count_digits: compte combien de chiffres faut
// cas special INT_MIN (-2147483648) car -INT_MIN overflow
// je remplis de DROITE a GAUCHE (i = len-1)
// str[i--] = (n%10)+'0' puis n/=10
// si negatif: str[0]='-' et je travaille avec -n

// #include <stdio.h>
// int main(void)
// {
// 	char *r1 = ft_itoa(42);
// 	char *r2 = ft_itoa(-123);
// 	char *r3 = ft_itoa(0);
// 	printf("42 -> '%s'\n", r1);    // 42
// 	printf("-123 -> '%s'\n", r2);  // -123
// 	printf("0 -> '%s'\n", r3);     // 0
// 	free(r1);
// 	free(r2);
// 	free(r3);
// 	return (0);
// }
