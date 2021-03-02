/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:09:12 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 09:38:26 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cpt;
	unsigned char	*ptr;
	unsigned char	carac;

	cpt = 0;
	ptr = (unsigned char*)b;
	carac = (unsigned char)c;
	while (cpt < len)
	{
		*ptr = carac;
		ptr++;
		cpt++;
	}
	return (b);
}
