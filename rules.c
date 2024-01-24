/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:25:33 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/20 23:24:30 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// The first element becomes the last one
void	rotate(t_list **l)
{
	t_list	*frst;
	t_list	*last;

	if (ft_lstsize(*l) > 1)
	{
		frst = *l;
		last = ft_lstlast(frst);
		*l = frst->next;
		frst->next = NULL;
		last->next = frst;
	}
}

void	ft_ra(t_list **a, int n)
{
	while (n > 0)
	{
		rotate(a);
		write(1, "ra\n", 3);
		n--;
	}
}

void	ft_rb(t_list **b, int n)
{
	while (n > 0)
	{
		rotate(b);
		write(1, "rb\n", 3);
		n--;
	}
}

void	ft_rr(t_list **a, t_list **b, int n)
{
	while (n > 0)
	{
		rotate(b);
		rotate(a);
		write(1, "rr\n", 3);
		n--;
	}
}

void	swap(t_list **l, char c)
{
	int		tmp;
	t_list	*x;
	t_list	*y;

	if (*l == NULL || (*l)->next == NULL)
		return ;
	x = *l;
	y = x->next;
	tmp = x->nb;
	x->nb = y->nb;
	y->nb = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
}
