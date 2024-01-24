/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:54:06 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/20 22:54:09 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **l)
{
	t_list	*last;
	t_list	*l_last;

	if (ft_lstsize(*l) > 1)
	{
		l_last = *l;
		last = ft_lstlast(*l);
		while (l_last->next != last)
			l_last = l_last->next;
		l_last->next = NULL;
		last->next = *l;
		*l = last;
	}
}

void	ft_rra(t_list **a, int n)
{
	while (n > 0)
	{
		reverse_rotate(a);
		write(1, "rra\n", 4);
		n--;
	}
}

void	ft_rrb(t_list **b, int n)
{
	while (n > 0)
	{
		reverse_rotate(b);
		write(1, "rrb\n", 4);
		n--;
	}
}

void	ft_rrr(t_list **a, t_list **b, int n)
{
	while (n > 0)
	{
		reverse_rotate(b);
		reverse_rotate(a);
		write(1, "rrr\n", 4);
		n--;
	}
}
// push a ---> vers b

void	push(t_list **stack_a, t_list **stack_b, char lin)
{
	t_list	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
	if (lin == 'a')
		write(1, "pa\n", 3);
	if (lin == 'b')
		write(1, "pb\n", 3);
}
