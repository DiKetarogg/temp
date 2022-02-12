/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:49:42 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:18:47 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_two(t_punshe_swep swep)
{
	if (!swep->a)
		return ;
	if (swep->a->data > swep->a->next->data)
		swap_sa(swep);
	return ;
}
