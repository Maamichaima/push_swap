/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:35:35 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/22 15:35:20 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_and_list(char **num, t_list **stack_a)
{
	int		i;
	t_list	*l;

	i = 0;
	while (num[i])
	{
		if (check_alpha(num[i]) || ft_strlen_0(num[i]) > 11
			|| !check_is_int(ft_atoi(num[i])))
		{
			write(2, "Error\n", 6);
			ft_free(stack_a);
			free__(num);
			exit(1);
		}
		l = ft_lstnew(ft_atoi(num[i]));
		ft_lstadd_back(stack_a, l);
		i++;
	}
}

t_list	*get_args(int c, char **v)
{
	t_list	*stack_a;
	int		i;
	int		j;
	char	**num;

	j = 1;
	stack_a = NULL;
	i = 0;
	while (j < c)
	{
		num = ft_split(v[j], ' ');
		check_and_list(num, &stack_a);
		free__(num);
		j++;
	}
	return (stack_a);
}
