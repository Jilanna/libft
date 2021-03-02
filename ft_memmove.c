/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:10:10 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 14:08:36 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			cpt;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		cpt = 0;
		while (cpt < n)
		{
			((unsigned char*)dst)[cpt] = ((unsigned char*)src)[cpt];
			cpt++;
		}
	}
	else
		while (n-- > 0)
			((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	return (dst);
}
