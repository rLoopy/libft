/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:41:44 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}


// ASCII valide = 0 à 127
// c'est du 7 bits
// simple check de range

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'a': ft=%d | real=%d\n", ft_isascii('a'), isascii('a'));
// 	printf("127: ft=%d | real=%d\n", ft_isascii(127), isascii(127));
// 	printf("128: ft=%d | real=%d\n", ft_isascii(128), isascii(128));
// 	printf("-1: ft=%d | real=%d\n", ft_isascii(-1), isascii(-1));
// 	return (0);
// }

