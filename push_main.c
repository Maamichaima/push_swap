/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:43:34 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/24 10:21:09 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (c < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = get_args(c, v);
	if (stack_a == NULL)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	push_swap(&stack_a, &stack_b);
	return (0);
}
