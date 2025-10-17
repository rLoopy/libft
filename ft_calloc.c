/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:08:49 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:30 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

// malloc + initialise a zero
// nmemb * size = taille totale
// memset tout a 0 apres malloc
// diff avec malloc: c'est deja rempli de \0

// #include <stdio.h>
// int main(void)
// {
// 	char *str = ft_calloc(5, sizeof(char));
// 	if (str)
// 	{
// 		printf("Allocated: '%s'\n", str);  // (vide, tous des \0)
// 		free(str);
// 	}
// 	return (0);
// }
