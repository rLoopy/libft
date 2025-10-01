/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohrer <rrohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:42:47 by loopy             #+#    #+#             */
/*   Updated: 2025/10/01 18:16:55 by rrohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *a = (char *)s1;
	char *b = (char *)s2;
	
	while (n && a[i] && b[i] && a[i] == b[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (a[i] - b[i]);
}
