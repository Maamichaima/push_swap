/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:38:31 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/21 19:22:46 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ab(int a)
{
	if (a > 0)
		return (a);
	else
		return (-a);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

size_t	ft_strlen_0(const char *s)
{
	size_t	i;

	i = 0;
	if (*s == '-' || *s == '+')
		s++;
	while (*s && *s == '0')
		s++;
	while (s[i] != '\0')
		i++;
	return (i);
}
