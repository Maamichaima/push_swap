/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:20:56 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/21 23:51:29 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_rra_rrb(t_list **a, int len_a, t_list **b, int len_b)
{
	if (len_a >= 0)
		ft_ra(a, ab(len_a));
	if (len_a < 0)
		ft_rra(a, ab(len_a));
	if (len_b >= 0)
		ft_rb(b, ab(len_b));
	if (len_b < 0)
		ft_rrb(b, ab(len_b));
}

void	to_the_top(t_list **a, int len_a, t_list **b, int len_b)
{
	int	move_to_gether;

	move_to_gether = min(ab(len_a), ab(len_b));
	if (len_a < 0 && len_b < 0)
	{
		ft_rrr(a, b, move_to_gether);
		ft_rra(a, ab(len_a) - move_to_gether);
		ft_rrb(b, ab(len_b) - move_to_gether);
	}
	else if (len_a > 0 && len_b > 0)
	{
		ft_rr(a, b, move_to_gether);
		ft_ra(a, len_a - move_to_gether);
		ft_rb(b, len_b - move_to_gether);
	}
	else
		rrr_rra_rrb(a, len_a, b, len_b);
}

void	vers_haut_stack_a(t_list **a, int len_a)
{
	if (len_a < 0)
		ft_rra(a, ab(len_a));
	else if (len_a > 0)
		ft_ra(a, len_a);
}

void	push_back(t_list **a, t_list **b)
{
	int	len_a;
	int	l;

	while (*b)
	{
		len_a = move_count(*a, closest_bigger(*a, (*b)->nb));
		vers_haut_stack_a(a, len_a);
		push(b, a, 'a');
	}
	l = move_count(*a, min_(*a));
	vers_haut_stack_a(a, l);
}
