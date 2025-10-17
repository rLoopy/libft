/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayanrohrer <rayanrohrer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:17:49 by loopy             #+#    #+#             */
/*   Updated: 2025/10/17 16:04:14 by rayanrohrer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

// affiche int dans le fd
// si negatif: write("-") puis -nb
// recursif: si nb>9 -> appel recursif avec nb/10
// puis putchar du dernier chiffre (nb%10)+'0'

// #include <stdio.h>
// int main(void)
// {
// 	ft_putnbr_fd(42, 1);     // Affiche 42
// 	ft_putchar_fd('\n', 1);  // Nouvelle ligne
// 	ft_putnbr_fd(-123, 1);   // Affiche -123
// 	ft_putchar_fd('\n', 1);  // Nouvelle ligne
// 	ft_putnbr_fd(0, 1);      // Affiche 0
// 	return (0);
// }
