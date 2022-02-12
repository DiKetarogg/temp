/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:55:21 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:20:14 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_rrr(t_punshe_swep swep)
{
	swap_rra_silent(swep);
	swap_rrb_silent(swep);
	ft_out(FT_STR, "rrr\n", 0);
}
