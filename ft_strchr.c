/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 05:07:29 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

// cherche PREMIERE occurrence de c
// je parcours jusqu'a trouver ou arriver au \0
// attention: faut check le \0 aussi apres la boucle!
// return pointeur vers position ou NULL

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("'l' in 'hello': ft=%s | real=%s\n", ft_strchr("hello", 'l'), strchr("hello", 'l"));
// 	printf("'h' in 'hello': ft=%s | real=%s\n", ft_strchr("hello", 'h'), strchr("hello", 'h'));
// 	printf("'\\0' in 'hello': ft=%s | real=%s\n", ft_strchr("hello", '\0'), strchr("hello", '\0'));
// 	return (0);
// }
