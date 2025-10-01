/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loopy <loopy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:15:29 by loopy             #+#    #+#             */
/*   Updated: 2025/09/30 16:25:31 by loopy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)str)[i]);
		i++;
		n--;
	}
	return (NULL);
}
