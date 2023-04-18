/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 05:51:02 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:56:30 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_div(t_node *stacka, int n)
{
	if (stack_size(stacka) <= 10)
		n = 5;
	else if (stack_size(stacka) >= 11 && stack_size(stacka) <= 150)
		n = 11;
	else if (stack_size(stacka) > 150 && stack_size(stacka) < 500)
		n = 18;
	else if (stack_size(stacka) >= 500)
		n = 23;
	return (n);
}

void	push1(t_node **stacka, t_node **stackb, t_stack etat, t_node *temp)
{
	while (*stacka)
	{
		if (!temp)
		{
			etat.start -= etat.offset;
			etat.end += etat.offset;
			temp = *stacka;
		}
		if (temp && temp->index > etat.start && temp->index <= etat.end)
		{
			while ((*stacka)->data != temp->data)
			{
				if (stack_index(*stacka, temp->data) > (etat.s_size / 2))
					rra(stacka);
				else
					ra(stacka);
			}
			pb(stacka, stackb);
			if ((*stackb)->index < etat.mid)
				rb(stackb);
			temp = *stacka;
		}
		else
			temp = temp->next;
	}
}

void	sort100(t_node *stacka, t_node *stackb)
{
	int		n;
	int		size;
	t_stack	etat;
	t_node	*temp;

	etat.s_size = stack_size(stacka);
	size = etat.s_size;
	ft_index(stacka, sort_tab(stack_to_tab(stacka), stack_size(stacka)));
	n = 0;
	n = check_div(stacka, n);
	etat.mid = size / 2 - 1;
	etat.offset = size / n;
	etat.start = etat.mid - etat.offset;
	etat.end = etat.mid + etat.offset;
	temp = NULL;
	push1(&stacka, &stackb, etat, temp);
	while (stackb)
	{
		stackb = sort_max(stackb);
		pa(&stackb, &stacka);
	}
	free_stack(stacka);
}

t_node	*sort4to99(t_node *stack, t_node *stackb, int i)
{
	while (i > 3)
	{
		stack = sort(stack);
		pb(&stack, &stackb);
		i--;
	}
	stack = sort_three(stack);
	while (stackb)
		pa(&stackb, &stack);
	return (stack);
}

void	swap(t_node *stack, t_node *stackb)
{
	int	i;

	stackb = NULL;
	if (stack_size(stack) == 2 && is_sorted(stack) == 1)
		sa(stack);
	else if (stack_size(stack) == 3)
	{
		stack = sort_three(stack);
		free_stack(stack);
	}
	else if (stack_size(stack) >= 4 && stack_size(stack) < 100
		&& is_sorted(stack) == 1)
	{
		i = stack_size(stack);
		stack = sort4to99(stack, stackb, i);
		free_stack(stack);
	}
	else if (stack_size(stack) >= 100 && is_sorted(stack) == 1)
		sort100(stack, stackb);
}
