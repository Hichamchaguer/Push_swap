/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:25:42 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:07:45 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*sort_three(t_node *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->data;
	b = stack->next->data;
	c = stack->next->next->data;
	if ((a > b) && (c > b) && (c > a))
		sa(stack);
	else if ((a > b) && (b > c) && (a > c))
	{
		sa(stack);
		rra(&stack);
	}
	if ((a > b) && (b < c) && (a > c))
		ra(&stack);
	if ((a < b) && (b > c) && (c > a))
	{
		sa(stack);
		ra(&stack);
	}
	if ((a < b) && (b > c) && (a > c))
		rra(&stack);
	return (stack);
}

t_node	*sort(t_node *stacka)
{
	int	min;

	min = get_min(stacka);
	while (stacka->data != min)
		ra(&stacka);
	return (stacka);
}

t_node	*sort_max(t_node *stackb)
{
	int		max;
	t_node	*tmp;

	tmp = NULL;
	max = get_max(stackb);
	while (stackb->data != max)
	{
		if (!tmp)
			tmp = stackb;
		if (tmp && tmp->data == max)
		{
			if (stack_index(stackb, tmp->data) <= (stack_size(stackb) / 2))
				rb(&stackb);
			else
				rrb(&stackb);
			tmp = stackb;
		}
		else
			tmp = tmp->next;
	}
	return (stackb);
}
