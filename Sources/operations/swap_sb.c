/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:52:02 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 23:13:28 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_sb_silent(t_punshe_swep swep)
{
	t_list	*temp;

	if (swep->size.b < 2)
		return ;
	temp = swep->b;
	swep->b = swep->b->next;
	temp->next = swep->b->next;
	swep->b->next = temp;
}

void	swap_sb(t_punshe_swep swep)
{
	t_list	*temp;

	if (swep->size.b < 2)
		return ;
	temp = swep->b;
	swep->b = swep->b->next;
	temp->next = swep->b->next;
	swep->b->next = temp;
	ft_out(FT_STR, "sb\n", 0);
}
