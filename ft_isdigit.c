/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:40:18 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


// check si chiffre
// entre '0' et '9'
// return 1 ou 0

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'0': ft=%d | real=%d\n", ft_isdigit('0'), isdigit('0'));
// 	printf("'9': ft=%d | real=%d\n", ft_isdigit('9'), isdigit('9'));
// 	printf("'a': ft=%d | real=%d\n", ft_isdigit('a'), isdigit('a'));
// 	printf("' ': ft=%d | real=%d\n", ft_isdigit(' '), isdigit(' '));
// 	return (0);
// }

