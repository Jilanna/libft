/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:28:53 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 11:52:07 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static long				ft_invers(long n, int i)
{
	long	nb;

	nb = 0;
	while (i >= 0)
	{
		nb = nb * 10 + (n % 10);
		n = n / 10;
		i--;
	}
	return (nb);
}

static int				lenght(int n)
{
	int				i;
	unsigned int	nb;

	i = (n < 0) ? 2 : 1;
	if (n < 0)
		nb = (unsigned int)(-1 * n);
	else
		nb = (unsigned int)n;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char					*ft_itoa(int n)
{
	int				i;
	char			*str;
	int				max;
	long			nb;

	nb = (long)n;
	nb = (n < 0) ? -nb : nb;
	max = lenght(n);
	str = malloc(max + 1);
	if (str == NULL)
		return (NULL);
	i = (n < 0) ? (max - 2) : (max - 1);
	nb = ft_invers(nb, i);
	i = 0;
	if (n < 0)
		str[i++] = 45;
	while (i < max)
	{
		str[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	str[max] = 0;
	return (str);
}
