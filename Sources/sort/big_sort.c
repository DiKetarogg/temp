/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:45:36 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/12 09:12:48 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	ft_stack_b(t_punshe_swep swep)
{
	while (swep->b)
	{
		if (!swep->b)
			break ;
		if (swep->b->data != max_value(swep->b)
			&& !sort_steps(swep->b, max_value(swep->b), swep->size.b))
			swap_rb(swep);
		else if (swep->b->data != max_value(swep->b)
			&& sort_steps(swep->b, max_value(swep->b), swep->size.b))
			swap_rrb(swep);
		else if (swep->b->data == max_value(swep->b))
			swap_pa(swep);
	}
}

static void	ft_sort_internal(t_punshe_swep swep, int action)
{
	int	count;

	count = 0;
	while (swep->a)
	{
		if (count > 1 && swep->a->order <= count)
		{
			swap_pb(swep);
			swap_rb(swep);
			++count;
		}
		else if (swep->a->order <= (count + action))
		{
			swap_pb(swep);
			++count;
		}
		else if (swep->a->order >= count)
			swap_ra(swep);
	}
	ft_stack_b(swep);
}

void	big_sort(t_punshe_swep swep)
{
	if (swep->size.a <= 100)
		ft_sort_internal(swep, 15);
	else
		ft_sort_internal(swep, 30);
}
