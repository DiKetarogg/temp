/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:49:59 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:39:36 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_rr(t_punshe_swep swep)
{
	swap_ra_silent(swep);
	swap_rb_silent(swep);
	ft_out(FT_STR, "rr\n", 0);
}
