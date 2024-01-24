/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:41:22 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/24 10:11:37 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_int(long content)
{
	if (content > INT_MAX || content < INT_MIN)
		return (0);
	else
		return (1);
}

int	check_alpha(char *v)
{
	int	i;

	i = 0;
	if (v[i] == '-' || v[i] == '+')
		i++;
	if (!v[i])
		return (1);
	while (v[i])
	{
		if (ft_isdigit(v[i]))
			i++;
		else
			return (1);
	}
	return (0);
}

int	check_double(t_list *stack_a)
{
	t_list	*tmp;

	while (stack_a)
	{
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->nb == tmp->nb)
				return (1);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int	check_sort(t_list *stack_a)
{
	while (stack_a && stack_a->next != NULL)
	{
		if (stack_a->nb > stack_a->next->nb)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
