/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:46:21 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/20 23:19:55 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrrab(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		reverse_rotate(stack_a);
	if (*stack_b)
		reverse_rotate(stack_b);
}

void	rrab(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		rotate(stack_a);
	if (*stack_b)
		rotate(stack_b);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
