/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:55:17 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:40:59 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_rrb_silent(t_punshe_swep swep)
{
	t_list	*pl;
	t_list	*l;

	if (!(swep->b) || !(swep->b)->next)
		return ;
	pl = ft_list_prelast(swep->b);
	l = ft_list_last(swep->b);
	l->next = swep->b;
	pl->next = 0;
	swep->b = l;
}

void	swap_rrb(t_punshe_swep swep)
{
	t_list	*pl;
	t_list	*l;

	if (!(swep->b) || !(swep->b)->next)
		return ;
	pl = ft_list_prelast(swep->b);
	l = ft_list_last(swep->b);
	l->next = swep->b;
	pl->next = 0;
	swep->b = l;
	ft_out(FT_STR, "rrb\n", 0);
}
