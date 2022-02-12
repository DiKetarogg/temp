/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:50:13 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:20:02 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_rra_silent(t_punshe_swep swep)
{
	t_list	*pl;
	t_list	*l;

	if (swep->size.a < 2)
		return ;
	pl = ft_list_prelast(swep->a);
	l = ft_list_last(swep->a);
	l->next = swep->a;
	pl->next = 0;
	swep->a = l;
}

void	swap_rra(t_punshe_swep swep)
{
	t_list	*pl;
	t_list	*l;

	if (swep->size.a < 2)
		return ;
	pl = ft_list_prelast(swep->a);
	l = ft_list_last(swep->a);
	l->next = swep->a;
	pl->next = 0;
	swep->a = l;
	ft_out(FT_STR, "rra\n", 0);
}
