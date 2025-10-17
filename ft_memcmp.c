/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:42:47 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:59 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
		n--;
	}
	return (0);
}

// compare n bytes de s1 et s2
// comme strncmp mais sur n bytes (pas limité au \0)
// unsigned char pour eviter valeurs negatives
// return diff entre premier byte different

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("'hello' vs 'hello' (5): ft=%d | real=%d\n", ft_memcmp("hello", "hello", 5), memcmp("hello", "hello", 5));
// 	printf("'hello' vs 'world' (5): ft=%d | real=%d\n", ft_memcmp("hello", "world", 5), memcmp("hello", "world", 5));
// 	printf("'abc' vs 'abz' (3): ft=%d | real=%d\n", ft_memcmp("abc", "abz", 3), memcmp("abc", "abz", 3));
// 	return (0);
// }
