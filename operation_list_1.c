/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_list_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:10:55 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/18 13:49:06 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	long	nb;
	int		i;
	int		signe;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10;
		nb += str[i] - '0';
		i++;
	}
	return (signe * nb);
}

int	min_(t_list *head)
{
	int	min;

	min = head->nb;
	head = head->next;
	while (head)
	{
		if (min > head->nb)
			min = head->nb;
		head = head->next;
	}
	return (min);
}

int	max_(t_list *head)
{
	int	max;

	max = head->nb;
	head = head->next;
	while (head)
	{
		if (max < head->nb)
			max = head->nb;
		head = head->next;
	}
	return (max);
}
