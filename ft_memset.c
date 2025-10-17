/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 03:16:09 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:30 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		((char *)str)[i] = c;
		i++;
		n--;
	}
	return (str);
}

// remplis n bytes de str avec la valeur c
// cast en (char*) pour acceder byte par byte
// tant que n>0: str[i]=c, i++, n--

// #include <stdio.h>
// int main(void)
// {
// 	char str[10] = "hello";
// 	ft_memset(str, 'A', 3);
// 	printf("Result: %s\n", str);  // AAAlo
// 	return (0);
// }
