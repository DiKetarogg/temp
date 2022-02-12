/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:51:45 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 23:12:14 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_sa_silent(t_punshe_swep swep)
{
	t_list	*temp;

	if (swep->size.a < 2)
		return ;
	temp = swep->a;
	swep->a = swep->a->next;
	temp->next = swep->a->next;
	swep->a->next = temp;

}

void	swap_sa(t_punshe_swep swep)
{
	t_list	*temp;

	if (swep->size.a < 2)
		return ;
	temp = swep->a;
	swep->a = swep->a->next;
	temp->next = swep->a->next;
	swep->a->next = temp;
	ft_out(FT_STR, "sa\n", 0);
}
