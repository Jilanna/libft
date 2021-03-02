/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:45:03 by nvu               #+#    #+#             */
/*   Updated: 2020/12/11 12:53:04 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen((char*)str);
	while (i < len && ((char*)str)[i] != (char)c)
		i++;
	if (str[i] == (char)c)
		return ((char*)(str + i));
	return (NULL);
}
