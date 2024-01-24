/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:25:00 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/21 11:35:20 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (check_double(*stack_a) == 1)
	{
		ft_free(stack_a);
		write(2, "Error\n", 6);
		exit(1);
	}
	if (check_sort(*stack_a))
		sort_sup_three(stack_a, stack_b);
	ft_free(stack_a);
}
