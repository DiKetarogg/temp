/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_mid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 04:51:19 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 19:55:44 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_list	*ft_list_mid(t_list **stacks)
{
	t_list	*temp;
	int		i;
	int		len;

	temp = *stacks;
	len = ft_list_len(temp) / 2;
	i = 0;
	while ((i != len) && temp)
	{
		temp = temp->next;
		++i;
	}
	return (temp);
}
