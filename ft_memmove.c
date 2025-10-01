/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohrer <rrohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 06:12:58 by loopy             #+#    #+#             */
/*   Updated: 2025/10/01 17:28:09 by rrohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (n == 0)
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
