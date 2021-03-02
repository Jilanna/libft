/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:18:22 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 09:42:17 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			cpt;

	cpt = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (cpt < n)
	{
		((unsigned char*)dst)[cpt] = ((unsigned char*)src)[cpt];
		cpt++;
	}
	return (dst);
}
