/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:07:04 by hchaguer          #+#    #+#             */
/*   Updated: 2023/04/12 01:37:47 by hchaguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

static int	whitespaces(char str)
{
	while (str == ' ' || (str >= 9 && str <= 13))
		return (1);
	return (0);
}

int	is_digit(char str)
{
	if ((str >= '0' && str <= '9') || str == ' ')
		return (1);
	else
	{
		write(2, "Error \n", 7);
		exit(EXIT_FAILURE);
	}
	return (0);
}

void	check_value(long nb, int sign)
{
	if (nb * sign < INT_MIN || nb * sign > INT_MAX)
	{
		write(2, "Error \n", 7);
		exit(EXIT_FAILURE);
	}
}

void	ft_exit(void)
{
	write(2, "Error \n", 7);
	exit(EXIT_FAILURE);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	while (whitespaces(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	nb = 0;
	if (! str[i])
		ft_exit();
	while (str[i] && (is_digit(str[i]) == 1))
	{
		if (str[i] == ' ')
			break ;
		nb *= 10;
		nb += str[i] - 48;
		i++;
		check_value(nb, sign);
	}
	return (nb * sign);
}
