/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loopy <loopy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:14:04 by loopy             #+#    #+#             */
/*   Updated: 2025/10/04 21:33:36 by loopy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (len)
	{
		dest[i] = s[start++];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
