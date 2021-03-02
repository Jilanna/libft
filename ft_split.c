/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:36:23 by nvu               #+#    #+#             */
/*   Updated: 2020/12/17 15:05:45 by nvu              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t		ft_lmots(char const *str, char c, int i)
{
	size_t		len;

	len = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (len);
		else
		{
			i++;
			len++;
		}
	}
	return (len);
}

static int			ft_spliting(char const *str, char c, int *i, char *mot)
{
	int		k;

	k = 0;
	if (!mot)
		return (0);
	while (str[*i])
	{
		if (str[*i] == c)
		{
			(*i)++;
			mot[k] = '\0';
			return (1);
		}
		mot[k++] = str[*i];
		(*i)++;
	}
	mot[k] = '\0';
	return (1);
}

static void			*ft_free(char **splited, int j)
{
	j--;
	while (j >= 0)
	{
		free(splited[j]);
		j--;
	}
	free(splited);
	return (NULL);
}

static size_t		ft_nbmots(char const *s, char c)
{
	size_t			i;
	size_t			nb;

	i = 1;
	if (s[0] != c)
		nb = 1;
	else
		nb = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			nb++;
		i++;
	}
	return (nb);
}

char				**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(splited = malloc(sizeof(char*) * (ft_nbmots(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			if (!(splited[j] = malloc(sizeof(char) * (ft_lmots(s, c, i) + 1))))
				return (ft_free(splited, j));
			ft_spliting(s, c, &i, splited[j++]);
		}
	}
	splited[j] = NULL;
	return (splited);
}
