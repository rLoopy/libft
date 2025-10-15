/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:57:39 by loopy             #+#    #+#             */
/*   Updated: 2025/10/15 14:17:41 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	// TODO: Trouver le début (start) - avancer tant que s1[start] est dans set
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	// TODO: Trouver la fin (end) - reculer tant que s1[end - 1] est dans set
	while (/* condition à compléter */)
		end--;
	// TODO: Utiliser ft_substr pour extraire de start à (end - start)
	return (/* à compléter */);
}
