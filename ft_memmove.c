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
	char *d = (char *)dest;
	char *s = (char *)src;
	size_t i;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if ( d <= s)
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
