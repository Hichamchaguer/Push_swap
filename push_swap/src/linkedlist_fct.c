/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_fct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:36:42 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:01:03 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "../push_swap.h"

void	lst_add_back(t_node *head, t_node *node)
{
	t_node	*cur;

	cur = head;
	if (!head)
		head = node;
	else
	{
		while (cur->next)
			cur = cur->next;
		cur->next = node;
		node->next = 0;
		cur = head;
	}
}

void	ft_lstadd_back(t_node **head, t_node *node1)
{
	t_node	*cur;

	if (!head && !(*head))
		return ;
	else if (head && *head)
	{
		cur = *head;
		while (cur->next)
			cur = cur->next;
		cur->next = node1;
	}
	else if (head)
		*head = node1;
}

t_node	*create_node(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = 0;
	return (node);
}

t_node	*removenode(t_node *node)
{
	t_node	*rm;

	if (!node)
		return (0);
	rm = node;
	node = node->next;
	return (node);
}
