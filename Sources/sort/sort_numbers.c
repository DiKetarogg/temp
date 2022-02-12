/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:48:51 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:31:52 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort(t_punshe_swep swep)
{
	void	(*const d[6])(t_punshe_swep) = {
		0, 0, sort_two, sort_three, sort_four, sort_five
	};
	if (swep->size.a > 5)
		big_sort(swep);
	else
		d[swep->size.a](swep);
}
