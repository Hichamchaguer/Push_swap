/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:05:18 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 07:24:28 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_node
{
	int				index;
	int				min;
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int	s_size;
	int	mid;
	int	start;
	int	end;
	int	offset;
}	t_stack;

t_node	*get_set_string(int ac, char **av);
t_node	*create_node(int data);
void	lst_add_back(t_node *head, t_node *node);
int		sa(t_node *stack);
void	ft_swap(t_node *stacka);
int		stack_size(t_node *stack);
t_node	*sort_three(t_node *stack);
void	swap(t_node *stack, t_node *stackb);
t_node	*ft_lstlast(t_node *lst);
void	rotate(t_node **stack);
t_node	**push_to(t_node **stacka, t_node **stackb);
t_node	*removenode(t_node *node);
void	ft_lstadd_back(t_node **head, t_node *node1);
int		*sort_tab(int *tab, int size);
int		*stack_to_tab(t_node *stacka);
void	ft_index(t_node *node, int *array);
void	sort100(t_node *stacka, t_node *stackb);
int		stack_index(t_node *stack, int data);
int		ft_indexation(t_node *stack);
int		rra(t_node **stack);
int		rrb(t_node **stack);
int		ra(t_node **stack);
int		rb(t_node **stack);
int		sa(t_node *stack);
int		pb(t_node **stacka, t_node **stackb);
int		pa(t_node **stackb, t_node **stacka);
t_node	*sort(t_node *stacka);
int		get_min(t_node *stack);
int		get_max(t_node *stack);
t_node	*sort_max(t_node *stackb);
void	ft_lstadd_front(t_node **head, t_node *node);
int		get_max(t_node *stack);
void	rotate(t_node **stack);
void	reverse_rotate(t_node **stack);
int		is_sorted(t_node *stack);
int		check_div(t_node *stacka, int n);
void	push1(t_node **stacka, t_node **stackb, t_stack etat, t_node *temp);
void	sort100(t_node *stacka, t_node *stackb);
void	swap(t_node *stack, t_node *stackb);
t_node	*free_stack(t_node *stacka);

#endif
