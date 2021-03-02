/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:47:09 by nvu               #+#    #+#             */
/*   Updated: 2020/12/02 12:56:13 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		cpt;
	void		*ptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	cpt = 0;
	ptr = dst;
	while (cpt < n)
	{
		((unsigned char*)dst)[cpt] = ((unsigned char*)src)[cpt];
		if ((unsigned char)c == ((unsigned char*)src)[cpt])
			return (ptr + 1);
		cpt++;
		ptr++;
	}
	return (NULL);
}
