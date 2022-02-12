/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:46:04 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 23:46:10 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	*new_arr(t_list *stack_b, int size)
{
	int 	*arr;
	int	d;

	arr = malloc(sizeof(int) * (size + 1));
	if (!stack_b || !arr)
		return (0);
	d = 0;
	while (stack_b)
	{
		arr[d] = stack_b->data;
		stack_b = stack_b->next;
		++d;
	}
	return (arr);
}

int	sort_steps(t_list *stack_b, int max_value, int size)
{
	int		z;
	int		*arr;

	arr = new_arr(stack_b, size);
	--size;
	if (!arr)
		return (0);
	z = size;
	while (arr[size] != max_value)
		--size;
	z = z - size;
	size = 0;
	while (arr[size] != max_value)
		++size;
	free(arr);
	if (z < size)
		return (1);
	return (0);
}

int	max_value(t_list *stack_b)
{
	int			max_value;
	t_list	*temp;

	temp = stack_b;
	max_value = temp->data;
	while (temp)
	{
		if (max_value < temp->data)
			max_value = temp->data;
		temp = temp->next;
	}
	return (max_value);
}

int	min_value(t_list *stack_b)
{
	int			min_value;
	t_list	*temp;

	temp = stack_b;
	min_value = temp->data;
	while (temp)
	{
		if (min_value > temp->data)
			min_value = temp->data;
		temp = temp->next;
	}
	return (min_value);
}
