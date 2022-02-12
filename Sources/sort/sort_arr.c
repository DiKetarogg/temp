/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:46:26 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 22:45:41 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	check_sort_arr(int *arr, int len)
{
	int			i;

	i = 0;
	while (i < len)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		++i;
	}
	return (1);
}

void	arr_sort(int **array, int len)
{
	int			i;

	--len;
	while (!check_sort_arr(*array, len))
	{
		i = 0;
		while (i < len)
		{
			if ((*array)[i] > (*array)[i + 1])
				swap(&(*array)[i], &(*array)[i + 1]);
			++i;
		}
	}
}
