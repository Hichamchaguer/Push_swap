/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 05:41:06 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:48:50 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_node *stacka)
{
	int	x;

	x = stacka->data;
	stacka->data = stacka->next->data;
	stacka->next->data = x;
}

void	rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*t2;

	if (!*stack)
		return ;
	tmp = *stack;
	*stack = tmp->next;
	t2 = tmp;
	while (t2->next)
		t2 = t2->next;
	t2->next = tmp;
	tmp->next = NULL;
}

void	reverse_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*latest;
	t_node	*tmp;

	if (*stack == NULL)
		return ;
	latest = ft_lstlast(*stack);
	head = *stack;
	tmp = *stack;
	while (tmp && tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	latest->next = head;
	(*stack) = latest;
}

int	is_sorted(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
