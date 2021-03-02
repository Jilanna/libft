/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:57:02 by nvu               #+#    #+#             */
/*   Updated: 2020/12/02 11:16:56 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	while (i >= 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char*)str + i);
	return (NULL);
}
