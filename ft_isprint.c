/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:50:48 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}


// imprimable = espace (32) a tilde (126)
// pas les trucs de controle genre \n ou \t
// juste un range check

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'a': ft=%d | real=%d\n", ft_isprint('a'), isprint('a'));
// 	printf("' ': ft=%d | real=%d\n", ft_isprint(' '), isprint(' '));
// 	printf("'\\n': ft=%d | real=%d\n", ft_isprint('\n'), isprint('\n'));
// 	printf("31: ft=%d | real=%d\n", ft_isprint(31), isprint(31));
// 	return (0);
// }

