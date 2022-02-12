/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prelast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:56:06 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 19:19:15 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_list	*ft_list_prelast(t_list *stack)
{
	t_list	*node;

	node = stack;
	if (!node)
		return (0);
	if (!node->next)
		return (node);
	while (node->next->next)
		node = node->next;
	return (node);
}
