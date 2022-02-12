/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:47:15 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:04:34 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static t_list	*search_value(t_list **stack, int size)
{
	t_list	*temp;
	t_list	*min;
	int		count_elem;

	min = *stack;
	count_elem = 0;
	while (min)
	{
		temp = *stack;
		count_elem = 0;
		while (temp)
		{
			if (min->data <= temp->data)
				count_elem++;
			temp = temp->next;
		}
		if (count_elem == size)
			return (min);
		min = min->next;
	}
	return (min);
}

static int	steps(t_list **stack_a, int size)
{
	int		steps;
	int		count;
	t_list	*temp;

	temp = *stack_a;
	count = 0;
	steps = 0;
	while (temp)
	{
		if (temp == search_value(stack_a, size))
			break ;
		temp = temp->next;
		++steps;
	}
	if (steps > size / 2)
		return (0);
	return (1);
}

void	sort_five(t_punshe_swep swep)
{
	t_list	*temp;
	int		i;

	i = 0;
	while (i < 2)
	{
		temp = search_value(&swep->a, swep->size.a);
		while (swep->a != temp)
		{
			if (!steps(&swep->a, swep->size.a))
				swap_rra(swep);
			else if (steps(&swep->a, swep->size.a))
				swap_ra(swep);
		}
		swap_pb(swep);
		i++;
	}
	sort_three(swep);
	swap_pa(swep);
	swap_pa(swep);
	sort_two(swep);
}
