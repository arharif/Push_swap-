/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:19:36 by arharif           #+#    #+#             */
/*   Updated: 2022/04/06 00:22:49 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sa(t_swap *s, int flag)
{
	ft_swap(&s->stack_a[0], &s->stack_a[1]);
	if (flag == 1)
		ft_print("sa\n");
}

void	ft_sb(t_swap *s, int flag)
{
	ft_swap(&s->stack_b[0], &s->stack_b[1]);
	if (flag == 1)
		ft_print("sb\n");
}

void	ft_ss(t_swap *s, int flag)
{
	ft_sa(s, flag);
	ft_sb(s, flag);
	ft_print("ss\n");
}
