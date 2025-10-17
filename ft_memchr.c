/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:15:29 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)str)[i]);
		i++;
		n--;
	}
	return (NULL);
}

// cherche c dans les n premiers bytes de str
// parcourt byte par byte (unsigned char)
// return pointeur vers la premiere occurrence
// diff avec strchr: limite de n bytes (pas de \0)

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "hello";
// 	printf("'l' in 'hello' (5): ft=%s | real=%s\n", (char *)ft_memchr(str, 'l', 5), (char *)memchr(str, 'l', 5));
// 	printf("'l' in 'hello' (2): ft=%s | real=%s\n", (char *)ft_memchr(str, 'l', 2), (char *)memchr(str, 'l', 2));
// 	return (0);
// }
