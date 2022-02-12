/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:47:46 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 23:30:32 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	steps_to_min(t_list *stack, int len)
{
	int	steps;
	int	min;

	min = min_value(stack);
	steps = 0;
	while (stack->data != min)
	{
		++steps;
		stack = stack->next;
	}
	if (steps > len / 2)
		return (0);
	return (1);
}

void	sort_four(t_punshe_swep swep)
{
	int	min;

	min = min_value(swep->a);
	while (swep->a->data != min)
	{
		if (steps_to_min(swep->a, swep->size.a))
			swap_ra(swep);
		else if (!steps_to_min(swep->a, swep->size.a))
			swap_rra(swep);
	}
	swap_pb(swep);
	sort_three(swep);
	swap_pa(swep);
}
