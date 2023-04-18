/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_fct1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:41:48 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:44:49 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_node **head, t_node *node)
{
	if (!head && !(*head))
		return ;
	else if (head && node)
	{
		node->next = *head;
		*head = node;
	}
}

int	stack_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*node;

	if (lst == NULL)
		return (0);
	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
}
