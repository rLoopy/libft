/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 05:07:29 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 15:57:16 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("last 'l' in 'hello': ft=%s | real=%s\n", ft_strrchr("hello", 'l'), strrchr("hello", 'l'));
// 	printf("'h' in 'hello': ft=%s | real=%s\n", ft_strrchr("hello", 'h'), strrchr("hello", 'h'));
// 	printf("'\\0' in 'hello': ft=%s | real=%s\n", ft_strrchr("hello", '\0'), strrchr("hello", '\0'));
// 	return (0);
// }

// pareil que strchr mais DERNIERE occurrence
// je vais a la fin puis je reviens en arriere
// i-- jusqu'a trouver ou i < 0
// diff avec strchr: sens inverse
