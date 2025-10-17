/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 06:12:58 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:56 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src || n == 0)
		return (dest);
	if (dest <= src)
	{
		i = 0;
		while (n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
			n--;
		}
	}
	else
	{
		i = n -1;
		while (n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
			n--;
		}
	}
	return (dest);
}

// comme memcpy mais gere les overlaps
// si dest <= src: copie de gauche a droite (normal)
// si dest > src: copie de droite a gauche (i = n-1)
// le sens de copie evite d'ecraser les donnees

// #include <stdio.h>
// int main(void)
// {
// 	char str[10] = "hello";
// 	ft_memmove(str + 2, str, 3);
// 	printf("Result: %s\n", str);  // hehelo
// 	return (0);
// }
