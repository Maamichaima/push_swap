/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:19:29 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/18 15:33:21 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	c_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*alloc_word(const char *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * (c_char(s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static void	*ft_free_split(int i, char **t)
{
	while (i > 0)
	{
		free(t[i - 1]);
		i--;
	}
	free(t);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			tab[i] = alloc_word(s, c);
			if (tab[i] == NULL)
				return (ft_free_split(i, tab));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
