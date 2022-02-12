/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:48:02 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:38:25 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_ra_silent(t_punshe_swep swep)
{
	t_list	*temp;
	t_list	*l;
	t_list	*h;

	if (swep->size.a < 2)
		return ;
	h = swep->a;
	l = ft_list_last(swep->a);
	temp = swep->a->next;
	l->next = h;
	h->next = 0;
	swep->a = temp;
}

void	swap_ra(t_punshe_swep swep)
{
	t_list	*temp;
	t_list	*l;
	t_list	*h;

	if (swep->size.a < 2)
		return ;
	h = swep->a;
	l = ft_list_last(swep->a);
	temp = swep->a->next;
	l->next = h;
	h->next = 0;
	swep->a = temp;
	ft_out(FT_STR, "ra\n", 0);
}
