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
	char *d = (char *)dest;
	char *s = (char *)src;
	size_t i;

	if (n == 0)
		return (dest);
	if ( d < s)
	{
		i = 0;
		while (n)
		{
			d[i] = s[i];
			i++;
			n--;
		}
	}
	else 
	{
		i = n -1;
		while (n)
		{
			d[i] = s[i];
			i--;
			n--;
		}
	}
	return (dest);
}