/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 04:58:47 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}


// si minuscule -> -32 pour passer en maj
// 'a'=97, 'A'=65 donc diff de 32
// sinon je retourne direct

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'a': ft=%c | real=%c\n", ft_toupper('a'), toupper('a'));
// 	printf("'z': ft=%c | real=%c\n", ft_toupper('z'), toupper('z'));
// 	printf("'A': ft=%c | real=%c\n", ft_toupper('A'), toupper('A'));
// 	printf("'5': ft=%c | real=%c\n", ft_toupper('5'), toupper('5'));
// 	return (0);
// }
