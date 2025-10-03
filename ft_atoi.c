/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohrer <rrohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:21:07 by rrohrer           #+#    #+#             */
/*   Updated: 2025/10/03 15:52:58 by rrohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int	res;
	int signe;
	int	i;

	i = 0;
	signe = 1;
	res = 0;
	if (!nptr)
		return 0;
	if (nptr[0] == '-')
	{
		signe = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		res = res * 10;
		res = res + (nptr[i] - '0');
		i++;
	}
	return (res * signe);
}
