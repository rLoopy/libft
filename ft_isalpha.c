/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:39:09 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}


// check si lettre (maj ou min)
// entre 'A'-'Z' OU 'a'-'z'
// return 1 si oui, 0 sinon

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'a': ft=%d | real=%d\n", ft_isalpha('a'), isalpha('a'));
// 	printf("'Z': ft=%d | real=%d\n", ft_isalpha('Z'), isalpha('Z'));
// 	printf("'5': ft=%d | real=%d\n", ft_isalpha('5'), isalpha('5'));
// 	printf("' ': ft=%d | real=%d\n", ft_isalpha(' '), isalpha(' '));
// 	return (0);
// }

