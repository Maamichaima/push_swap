/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:31:05 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/21 10:39:15 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_2(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 3)
		push(stack_a, stack_b, 'b');
	if (ft_lstsize(*stack_a) > 3)
		push(stack_a, stack_b, 'b');
}

void	sort_sup_three(t_list **stack_a, t_list **stack_b)
{
	int	len_a;
	int	len_b;
	int	nb_move;

	push_2(stack_a, stack_b);
	while (ft_lstsize(*stack_a) > 3)
	{
		nb_move = min_move(*stack_a, *stack_b);
		len_a = move_count(*stack_a, nb_move);
		len_b = move_count(*stack_b, closest_smaller(*stack_b, nb_move));
		to_the_top(stack_a, len_a, stack_b, len_b);
		push(stack_a, stack_b, 'b');
	}
	sort3(stack_a);
	push_back(stack_a, stack_b);
}
