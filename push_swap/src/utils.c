/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:08:44 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:14:06 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_node *stack)
{
	int	data_min;

	if (!stack)
		return (0);
	data_min = stack->data;
	stack = stack->next;
	while (stack)
	{
		if (data_min > stack->data)
			data_min = stack->data;
		stack = stack->next;
	}
	return (data_min);
}

int	get_max(t_node *stack)
{
	int	data_max;

	if (!stack)
		return (0);
	data_max = stack->data;
	stack = stack->next;
	while (stack)
	{
		if (data_max < stack->data)
			data_max = stack->data;
		stack = stack->next;
	}
	return (data_max);
}

int	*stack_to_tab(t_node *stacka)
{
	int	size;
	int	*tab;
	int	i;

	size = stack_size(stacka);
	tab = malloc(sizeof(int) * size);
	i = 0;
	while (stacka)
	{
		tab[i] = stacka->data;
		stacka = stacka->next;
		i++;
	}
	return (tab);
}

int	*sort_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (tab);
}
