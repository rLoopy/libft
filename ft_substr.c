/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:14:04 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	max;
	char	*dest;

	i = 0;
	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (start >= max)
		return (ft_strdup(""));
	if (start + len > max)
		len = max - start;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (len)
	{
		dest[i] = s[start++];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

// extrait sous-string de s
// si start >= len de s -> return vide
// si start+len depasse -> je reduis len
// copie char par char

// #include <stdio.h>
// int main(void)
// {
// 	char *r1 = ft_substr("hello world", 6, 5);
// 	char *r2 = ft_substr("hello", 0, 3);
// 	printf("'hello world' (6,5): %s\n", r1);  // world
// 	printf("'hello' (0,3): %s\n", r2);        // hel
// 	free(r1);
// 	free(r2);
// 	return (0);
// }
