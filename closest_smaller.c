/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closest_smaller.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:25:28 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/22 00:07:59 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	closest_smaller(t_list *b, int n)
{
	long	closest;
	t_list	*stack_;

	closest = LONG_MIN;
	stack_ = b;
	while (b != NULL)
	{
		if (b->nb < n && b->nb > closest)
			closest = b->nb;
		b = b->next;
	}
	if (closest == LONG_MIN)
		closest = max_(stack_);
	return (closest);
}

int	closest_bigger(t_list *b, int n)
{
	long	closest;
	t_list	*stack_b;

	closest = LONG_MAX;
	stack_b = b;
	while (b != NULL)
	{
		if (b->nb > n && b->nb < closest)
			closest = b->nb;
		b = b->next;
	}
	if (closest == LONG_MAX)
		closest = min_(stack_b);
	return (closest);
}
