/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:47:04 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/02 06:33:56 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkdoubles(char **av, int pos)
{
	int	i;
	int	nb;

	i = 1;
	while (i < pos)
	{
		nb = ft_atoi(av[i]);
		if (nb == ft_atoi(av[pos]))
			return (0);
		i++;
	}
	return (1);
}

void	check(char **av, int i)
{
	if (checkdoubles(av, i) == 0)
	{
		write(2, "Error \n", 7);
		exit(EXIT_FAILURE);
	}
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free (s[i++]);
	free (s);
}

void	check1(int i, char **s)
{
	if (checkdoubles(s, i) == 0)
	{
		write(2, "Error \n", 7);
		exit(EXIT_FAILURE);
	}
}

t_node	*get_set_string(int ac, char **av)
{
	int		i;
	int		j;
	t_node	*stack_a;
	char	**s;

	i = 1;
	stack_a = NULL;
	while (i < ac)
	{
		s = ft_split(av[i], ' ');
		check(av, i);
		j = 0;
		while (s[j])
		{
			check1(j, s);
			ft_lstadd_back(&stack_a, create_node(ft_atoi(s[j])));
			j++;
		}
		ft_free(s);
		i++;
	}
	return (stack_a);
}
