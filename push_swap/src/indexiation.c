/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexiation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 05:32:29 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:36:24 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index(t_node *node, int *array)
{
	int	i;

	i = 0;
	while (node)
	{
		if (node->data == array[i])
		{
			node->index = i;
			node = node->next;
			i = -1;
		}
		i++;
	}
	free(array);
}

int	stack_index(t_node *stack, int data)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->data == data)
			return (i);
		else
			i++;
		stack = stack->next;
	}
	return (0);
}
