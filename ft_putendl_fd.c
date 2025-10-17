/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:09:42 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:03:48 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// comme putstr mais avec \n a la fin
// ecrit string puis write("\n", 1)
// pratique pour afficher ligne par ligne

// #include <stdio.h>
// int main(void)
// {
// 	ft_putendl_fd("Hello", 1);  // Affiche Hello + \n
// 	ft_putendl_fd("World", 1);  // Affiche World + \n
// 	return (0);
// }
