/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:21:18 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 16:53:48 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t		cpt;
	void		*ptr;

	cpt = 0;
	ptr = (void*)s;
	while (cpt < n)
	{
		if ((unsigned char)c == ((unsigned char*)s)[cpt])
			return (ptr);
		cpt++;
		ptr++;
	}
	return (NULL);
}
