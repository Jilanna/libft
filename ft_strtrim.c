/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:12:05 by nvu               #+#    #+#             */
/*   Updated: 2020/11/30 16:49:42 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_strlenw(char *s1, char *set, int len)
{
	int		j;
	int		len_max;

	len_max = 0;
	while (s1[len_max])
		len_max++;
	len = len_max - len;
	while (--len_max >= 0)
	{
		j = -1;
		while (set[++j])
			if (set[j] == s1[len_max])
				break ;
		if (set[j] == 0)
			break ;
		len--;
	}
	if (len >= 0)
		return (len);
	else
		return (0);
}

static int	ft_strlenq(char *s1, char *set)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	if ((!s1) || (!set))
		return (-2);
	while (s1[i] != 0)
	{
		j = -1;
		while (set[++j])
			if (set[j] == s1[i])
				break ;
		if (set[j] == 0)
			break ;
		len++;
		i++;
	}
	return (ft_strlenw(s1, set, len));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = -1;
	if (!(str = malloc(ft_strlenq((char*)s1, (char*)set) + 1)))
		return (NULL);
	while (s1[++i] != 0)
	{
		j = -1;
		while (set[++j] != 0)
			if (s1[i] == set[j])
				break ;
		if (set[j] == 0)
			break ;
	}
	j = ft_strlenq((char*)s1, (char*)set);
	k = -1;
	while (++k < j)
		str[k] = s1[i++];
	str[k] = 0;
	return (str);
}
