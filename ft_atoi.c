/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:13:58 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 11:48:25 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	unsigned int	i;
	int				signe;
	unsigned long	sortie;

	i = 0;
	sortie = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sortie = sortie * 10 + (str[i] - '0');
		i++;
	}
	if ((sortie > 2147483647 && signe == 1)
		|| (sortie > 2147483648 && signe == -1))
		return (0);
	return (signe * (int)sortie);
}
