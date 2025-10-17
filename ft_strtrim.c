/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:57:39 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// enleve chars du set au debut ET a la fin
// start: j'avance tant que s1[start] est dans set
// end: je recule tant que s1[end] est dans set
// attention end>start pour cas limites
// j'utilise substr pour extraire le milieu

// #include <stdio.h>
// int main(void)
// {
// 	char *r1 = ft_strtrim("  hello  ", " ");
// 	char *r2 = ft_strtrim("xxxhelloxxx", "x");
// 	printf("'  hello  ' trim ' ': '%s'\n", r1);    // hello
// 	printf("'xxxhelloxxx' trim 'x': '%s'\n", r2); // hello
// 	free(r1);
// 	free(r2);
// 	return (0);
// }
