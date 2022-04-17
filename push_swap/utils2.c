/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:25:30 by arharif           #+#    #+#             */
/*   Updated: 2022/04/06 00:25:32 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max > tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int	ft_max(int *tab, int len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
