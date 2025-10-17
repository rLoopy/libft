/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:38:27 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}


// lettre OU chiffre
// j'utilise isalpha OU isdigit
// facile

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'a': ft=%d | real=%d\n", ft_isalnum('a'), isalnum('a'));
// 	printf("'5': ft=%d | real=%d\n", ft_isalnum('5'), isalnum('5'));
// 	printf("'Z': ft=%d | real=%d\n", ft_isalnum('Z'), isalnum('Z'));
// 	printf("'!': ft=%d | real=%d\n", ft_isalnum('!'), isalnum('!'));
// 	return (0);
// }

