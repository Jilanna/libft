/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:56:13 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 12:54:34 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	if (!(n > 0))
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		while ((s1[i + j] == s2[j] || s2[j] == '\0') && i + j <= n)
		{
			if (s2[j] == '\0')
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
