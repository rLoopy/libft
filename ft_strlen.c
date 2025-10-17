/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:05:10 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// simple: je compte jusqu'au \0
// i++ tant que str[i] existe
// retourne i = la longueur

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("'hello': ft=%zu | real=%zu\n", ft_strlen("hello"), strlen("hello"));
// 	printf("'': ft=%zu | real=%zu\n", ft_strlen(""), strlen(""));
// 	printf("'42': ft=%zu | real=%zu\n", ft_strlen("42"), strlen("42"));
// 	return (0);
// }
