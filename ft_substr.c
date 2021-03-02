/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:58:51 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 12:04:05 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;
	size_t		strlen;

	i = 0;
	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if ((size_t)start > strlen - 1)
		return (ft_strdup(""));
	strlen = strlen - start;
	if (strlen > len)
		strlen = len;
	ptr = malloc(sizeof(char) * (strlen + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[start + i] != 0 && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
