/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:19:17 by arharif           #+#    #+#             */
/*   Updated: 2022/04/06 00:19:19 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(int *tab, int size)
{
	int	i;
	int	swap;

	i = size - 1;
	while (i > 0)
	{
		swap = tab[i];
		tab[i] = tab[i - 1];
		tab[i - 1] = swap;
		i--;
	}
}

void	ft_rra(t_swap *s, int flag)
{
	reverse_rotate(s->stack_a, s->stack_a_size);
	if (flag == 1)
		ft_print("rra\n");
}

void	ft_rrb(t_swap *s, int flag)
{
	reverse_rotate(s->stack_b, s->stack_b_size);
	if (flag == 1)
		ft_print("rrb\n");
}

void	ft_rrr(t_swap *s)
{
	reverse_rotate(s->stack_a, s->stack_a_size);
	reverse_rotate(s->stack_b, s->stack_b_size);
	ft_print("rrr\n");
}
