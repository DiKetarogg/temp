/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:50:03 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:39:19 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_rb_silent(t_punshe_swep swep)
{
	t_list	*temp;
	t_list	*l;
	t_list	*h;

	if (!(swep->b) || !(swep->b)->next)
		return ;
	h = swep->b;
	temp = h->next;
	l = ft_list_last(swep->b);
	l->next = h;
	h->next = 0;
	swep->b = temp;
}

void	swap_rb(t_punshe_swep swep)
{
	t_list	*temp;
	t_list	*l;
	t_list	*h;

	if (!swep->b || !(swep->b)->next)
		return ;
	h = swep->b;
	temp = h->next;
	l = ft_list_last(swep->b);
	l->next = h;
	h->next = 0;
	swep->b = temp;
	ft_out(FT_STR, "rb\n", 0);
}
