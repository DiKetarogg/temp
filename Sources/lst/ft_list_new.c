/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:50:22 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 19:56:01 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_list	*ft_list_new(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if(!node)
		return (0);
	node->data = data;
	node->order = 0;
	node->next = 0;
	return (node);
}
