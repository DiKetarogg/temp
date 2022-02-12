/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:46:40 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:36:31 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_pa(t_punshe_swep swep)
{
	t_list	*temp;

	if (!swep->b)
		return ;
	temp = swep->b;
	swep->b = (swep->b)->next;
	temp->next = swep->a;
	swep->a = temp;
	++swep->size.a;
	--swep->size.b;
	ft_out(FT_STR, "pa\n", 0);
}
