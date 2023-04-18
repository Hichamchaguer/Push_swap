/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:01:59 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:03:45 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	**push_to(t_node **stacka, t_node **stackb)
{
	t_node	*tmp;

	tmp = *stacka;
	*stacka = tmp->next;
	*stackb = tmp;
	tmp->next = NULL;
	lst_add_back(*stackb, tmp);
	return (stackb);
}

int	pb(t_node **stacka, t_node **stackb)
{
	t_node	*tmp;

	tmp = *stacka;
	*stacka = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stackb, tmp);
	ft_printf("pb\n");
	return (0);
}

int	pa(t_node **stackb, t_node **stacka)
{
	t_node	*tmp;

	tmp = *stackb;
	*stackb = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stacka, tmp);
	ft_printf("pa\n");
	return (0);
}
