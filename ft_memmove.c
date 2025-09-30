/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loopy <loopy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 06:12:58 by loopy             #+#    #+#             */
/*   Updated: 2025/09/30 17:34:03 by loopy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*tampon;

	i = 0;
	while (n)
	{
		((char *)tampon)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (n)
	{
		((char *)dest)[i] = ((char *)tampon)[i]
		i++;
	}
	return (dest);

}