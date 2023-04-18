/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:05:08 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:00:13 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rra(t_node **stack)
{
	reverse_rotate(stack);
	ft_printf("rra\n");
	return (0);
}

int	rrb(t_node **stack)
{
	reverse_rotate(stack);
	ft_printf("rrb\n");
	return (0);
}

int	ra(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return (0);
	rotate(stack);
	ft_printf("ra\n");
	return (0);
}

int	rb(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return (0);
	rotate(stack);
	ft_printf("rb\n");
	return (0);
}

int	sa(t_node *stack)
{
	ft_swap(stack);
	ft_printf("sa\n");
	return (0);
}
