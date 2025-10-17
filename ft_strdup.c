/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:02:01 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:30 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = ft_strlen(s);
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// duplique la string s
// malloc (len + 1) pour le \0
// copie char par char
// oublie pas de free apres!

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *ft = ft_strdup("hello");
// 	char *real = strdup("hello");
// 	printf("'hello': ft=%s | real=%s\n", ft, real);
// 	free(ft);
// 	free(real);
// 	return (0);
// }
