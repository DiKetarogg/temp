/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists_addback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:50:48 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 19:56:28 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lists_addback(t_list **lists, t_list *other)
{
	t_list	*node;

	if (!lists)
		return ;
	node = *lists;
	if (!*lists)
	{
		*lists = other;
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = other;
}
