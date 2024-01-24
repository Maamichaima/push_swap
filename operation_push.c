/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:06:43 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/22 11:52:06 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **x)
{
	int	max;

	max = max_(*x);
	if ((*x)->nb == max)
		ft_ra(x, 1);
	else if ((*x)->next->nb == max)
		ft_rra(x, 1);
	if ((*x)->nb > (*x)->next->nb)
		swap(x, 'a');
}

int	index_(t_list *a, int c)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		if (a->nb == c)
		{
			return (i);
		}
		i++;
		a = a->next;
	}
	return (-1);
}

int	move_count(t_list *stack_a, int target)
{
	int	len;
	int	i;
	int	l_target;

	i = 0;
	l_target = index_(stack_a, target);
	len = ft_lstsize(stack_a) / 2;
	if (l_target <= len)
		i = l_target;
	else if (l_target > len)
		i = l_target - ft_lstsize(stack_a);
	return (i);
}

int	n_move_ab(int a, int b)
{
	int	m;

	if (a * b <= 0)
		return (ab(a) + ab(b));
	a = ab(a);
	b = ab(b);
	m = min(a, b);
	a = a - m;
	b = b - m;
	return (a + b + m);
}

int	min_move(t_list *a, t_list *b)
{
	int		t;
	t_list	*tn;
	t_list	*tmp;

	t = n_move_ab(move_count(a, a->nb), move_count(b, closest_smaller(b,
					a->nb)));
	tn = a;
	tmp = a->next;
	while (tmp != NULL)
	{
		if (t > n_move_ab(move_count(a, tmp->nb), move_count(b,
					closest_smaller(b, tmp->nb))))
		{
			t = n_move_ab(move_count(a, tmp->nb), move_count(b,
						closest_smaller(b, tmp->nb)));
			tn = tmp;
		}
		tmp = tmp->next;
	}
	return (tn->nb);
}
