/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:19:25 by arharif           #+#    #+#             */
/*   Updated: 2022/04/06 00:19:27 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(int *tab, int size)
{
	int	first;
	int	swap;
	int	i;

	i = 1;
	first = tab[0];
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[i - 1];
		tab[i - 1] = swap;
		i++;
	}
	tab[size] = '\0';
}

void	ft_ra(t_swap *s, int flag)
{
	ft_rotate(s->stack_a, s->stack_a_size);
	if (flag == 1)
		ft_print("ra\n");
}

void	ft_rb(t_swap *s, int flag)
{
	ft_rotate(s->stack_b, s->stack_b_size);
	if (flag == 1)
		ft_print("rb\n");
}

void	ft_rr(t_swap *s)
{
	ft_rotate(s->stack_a, s->stack_a_size);
	ft_rotate(s->stack_b, s->stack_b_size);
	ft_print("rr\n");
}
