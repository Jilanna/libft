/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:46:28 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 12:53:15 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		src_len;

	src_len = ft_strlen(src);
	ptr = NULL;
	ptr = malloc(sizeof(char) * src_len + 1);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < src_len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
