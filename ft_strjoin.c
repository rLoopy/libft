/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:22:27 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// concat s1 + s2 dans nouvelle string
// malloc (len1 + len2 + 1) pour le \0
// copie s1 puis s2
// oublie pas le \0 final!

// #include <stdio.h>
// int main(void)
// {
// 	char *r1 = ft_strjoin("hello", "world");
// 	char *r2 = ft_strjoin("", "test");
// 	printf("'hello' + 'world': %s\n", r1);  // helloworld
// 	printf("'' + 'test': %s\n", r2);        // test
// 	free(r1);
// 	free(r2);
// 	return (0);
// }
