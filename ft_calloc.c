/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:21:53 by nvu               #+#    #+#             */
/*   Updated: 2020/11/27 14:22:58 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*parcours;
	size_t	i;

	ptr = NULL;
	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	parcours = ptr;
	while (i < count * size)
	{
		parcours[i] = 0;
		i++;
	}
	return (ptr);
}
