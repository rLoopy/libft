/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:01:08 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// ecrit 1 char dans le fd
// fd=1 pour stdout, fd=2 pour stderr
// write(fd, &c, 1) = 1 byte

// #include <stdio.h>
// int main(void)
// {
// 	ft_putchar_fd('A', 1);  // Affiche A
// 	ft_putchar_fd('\n', 1); // Nouvelle ligne
// 	ft_putchar_fd('Z', 1);  // Affiche Z
// 	return (0);
// }
