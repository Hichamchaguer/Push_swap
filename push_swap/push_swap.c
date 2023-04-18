/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:02:12 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:25:36 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*free_stack(t_node *stacka)
{
	t_node	*tmp;

	while (stacka)
	{
		tmp = stacka->next;
		free(stacka);
		stacka = tmp;
	}
	return (stacka);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_b = NULL;
	if (ac >= 2)
	{
		stack_a = get_set_string(ac, av);
		swap(stack_a, stack_b);
		return (0);
	}
}
