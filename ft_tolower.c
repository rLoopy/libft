/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 04:58:47 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}


// pareil que toupper mais inverse
// si maj -> +32 pour passer en min
// sinon je retourne direct

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("'A': ft=%c | real=%c\n", ft_tolower('A'), tolower('A'));
// 	printf("'Z': ft=%c | real=%c\n", ft_tolower('Z'), tolower('Z'));
// 	printf("'a': ft=%c | real=%c\n", ft_tolower('a'), tolower('a'));
// 	printf("'5': ft=%c | real=%c\n", ft_tolower('5'), tolower('5'));
// 	return (0);
// }

