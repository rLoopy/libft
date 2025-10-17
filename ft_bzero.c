/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 04:48:42 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:30 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		((char *)str)[i] = '\0';
		i++;
		n--;
	}
}

// comme memset mais avec '\0'
// met n bytes a zero
// simple: str[i]='\0' tant que n>0

// #include <stdio.h>
// int main(void)
// {
// 	char str[10] = "hello";
// 	ft_bzero(str, 3);
// 	printf("Result: %s\n", str);  // \0\0\0lo
// 	return (0);
// }
