/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:43:18 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/12 02:24:47 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	clear_list(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	while (*stack_a)
	{
		*stack_a = (*stack_a)->next;
		free(temp);
		temp = *stack_a;
	}
	free((*stack_a));
}

static t_list	*ft_list_init(int *array, int size)
{
	t_list	*stack;
	int		i;

	stack = 0;
	i = size;
	while (i)
		ft_list_addfront(&stack, ft_list_new(array[--i]));
	return (stack);
}

static void	set_order(t_list **stack, int **array)
{
	t_list		*temp;
	int			i;
	int const	len = ft_list_len(*stack);

	i = 0;
	while (i < len)
	{
		temp = *stack;
		while (temp)
		{
			if (temp->data == (*array)[i])
			{
				temp->order = i;
				break ;
			}
			temp = temp->next;
		}
		++i;
	}
}

int	main(int argc, char **argv)
{
	t_punshe_sweps	sweps;
	int		*array;
	int		size;

	if (argc < 2)
		return (0);
	sweps.b = 0;
	size = ft_extract_array(&array, argc - 1, argv + 1);
	sweps.size = (t_sizes){size, 0};
	if (!size)
	{
		ft_err(FT_STR, "Error\n", FT_FLUSH, 0);
		exit(1);
	}
	if (size < 2)
	{
		free(array);
		return (0);
	}
	sweps.a = ft_list_init(array, size);
	arr_sort(&array, size);
	set_order(&sweps.a, &array);
	ft_sort(&sweps);
	clear_list(&sweps.a);
	free(array);
	ft_flush(1);
	ft_flush(2);
	return (0);
}
