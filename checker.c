/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:50:44 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/20 23:19:24 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rules(t_list **stack_a, t_list **stack_b, char *l)
{
	if (!ft_strcmp(l, "sa\n"))
		swap(stack_a, 'd');
	else if (!ft_strcmp(l, "sb\n"))
		swap(stack_b, 'd');
	else if (!ft_strcmp(l, "ra\n"))
		rotate(stack_a);
	else if (!ft_strcmp(l, "rb\n"))
		rotate(stack_b);
	else if (!ft_strcmp(l, "rr\n"))
		rrab(stack_a, stack_b);
	else if (!ft_strcmp(l, "rra\n"))
		reverse_rotate(stack_a);
	else if (!ft_strcmp(l, "rrb\n"))
		reverse_rotate(stack_b);
	else if (!ft_strcmp(l, "rrr\n"))
		rrrab(stack_a, stack_b);
	else if (!ft_strcmp(l, "pa\n"))
		push(stack_b, stack_a, 'd');
	else if (!ft_strcmp(l, "pb\n"))
		push(stack_a, stack_b, 'd');
	else
		ft_error_();
}

void	check_final(t_list **stack_a, t_list **stack_b)
{
	char	*l;

	l = get_next_line(0);
	while (l != NULL)
	{
		rules(stack_a, stack_b, l);
		free(l);
		l = get_next_line(0);
	}
	if (!*stack_b && !check_sort(*stack_a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

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
	if (check_double(stack_a) == 1)
	{
		ft_free(&stack_a);
		ft_error_();
	}
	check_final(&stack_a, &stack_b);
	ft_free(&stack_a);
	ft_free(&stack_b);
	return (0);
}
