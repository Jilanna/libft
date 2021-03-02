/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:50:43 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 12:54:09 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t			ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (n > 0 && i < n - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (n > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
