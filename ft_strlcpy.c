/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohrer <rrohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:18:16 by rrohrer           #+#    #+#             */
/*   Updated: 2025/10/03 16:56:07 by rrohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	max;
	size_t	src_len;

	src_len = ft_strlen(src);
	max = size - 1;
	i = 0;
	while (src[i] && max)
	{
		dest[i] = src[i];
		i++;
		max--;
	}
	dest[i] = '\0';
	return (src_len);
}
 