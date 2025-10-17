/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 05:53:50 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

// copie n bytes de src vers dest
// unsigned char pour traiter byte par byte
// attention: marche pas si dest et src overlap
// pour overlap utiliser memmove

// #include <stdio.h>
// int main(void)
// {
// 	char dest[10] = "hello";
// 	char src[] = "world";
// 	ft_memcpy(dest, src, 3);
// 	printf("Result: %s\n", dest);  // worlo
// 	return (0);
// }
