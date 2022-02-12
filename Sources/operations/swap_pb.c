/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:47:38 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:37:13 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_pb(t_punshe_swep swep)
{
	t_list	*temp;

	if (!swep->a)
		return ;
	temp = swep->a;
	swep->a = (swep->a)->next;
	temp->next = swep->b;
	swep->b = temp;
	--swep->size.a;
	++swep->size.b;
	ft_out(FT_STR, "pb\n", 0);
}
