/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:49:24 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:16:31 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	ft_maxvalue(t_list *stack)
{
	if (stack->data > stack->next->data
		&& stack->data > stack->next->next->data)
		return (1);
	if (stack->next->data > stack->data
		&& stack->next->data > stack->next->next->data)
		return (2);
	if (stack->next->next->data > stack->next->data
		&& stack->next->next->data > stack->data)
		return (3);
	return (0);
}

void	sort_three(t_punshe_swep swep)
{
	int	max_value;

	max_value = ft_maxvalue(swep->a);
	if (max_value == 1)
	{
		swap_ra(swep);
		if (swep->a->data > swep->a->next->data)
			swap_sa(swep);
		return ;
	}
	if (max_value == 2)
	{
		swap_rra(swep);
		if (swep->a->data > swep->a->next->data)
			swap_sa(swep);
		return ;
	}
	if (max_value == 3)
	{
		if (swep->a->data > swep->a->next->data)
			swap_sa(swep);
		return ;
	}
}
