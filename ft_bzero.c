/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:13:28 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 09:39:21 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			cpt;
	unsigned char	*ptr;

	cpt = 0;
	ptr = (unsigned char*)s;
	while (cpt < n)
	{
		*ptr = (unsigned char)0;
		ptr++;
		cpt++;
	}
	return (s);
}
