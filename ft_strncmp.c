/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 06:23:12 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// compare n premiers chars de s1 et s2
// j'avance tant que n>0 ET chars egaux
// attention: unsigned char sinon problemes avec valeurs negatives
// return 0 si =, negatif si s1<s2, positif si s1>s2

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("'hello' vs 'hello' (3): ft=%d | real=%d\n", ft_strncmp("hello", "hello", 3), strncmp("hello", "hello", 3));
// 	printf("'hello' vs 'world' (3): ft=%d | real=%d\n", ft_strncmp("hello", "world", 3), strncmp("hello", "world", 3));
// 	printf("'abc' vs 'abz' (3): ft=%d | real=%d\n", ft_strncmp("abc", "abz", 3), strncmp("abc", "abz", 3));
// 	return (0);
// }
