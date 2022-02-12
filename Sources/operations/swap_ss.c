/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:52:30 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:23:13 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_ss(t_punshe_swep swep)
{
	swap_sa_silent(swep);
	swap_sb_silent(swep);
	ft_out(FT_STR, "ss\n", 0);
}
