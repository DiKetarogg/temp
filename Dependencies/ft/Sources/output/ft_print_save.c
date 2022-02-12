/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_save.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:03:37 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 04:14:53 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detail_print.h"

void	ft_print_save(int fd, char const *str)
{
	t_args		args;
	char		*end;
	char		*it;

	args = ft_print_get_args(fd);
	if (!args)
		return ;
	end = args->end;
	it = args->it;
	while (*str)
	{
		if (it == end)
		{
			args->it = it;
			ft_print_flush(fd);
			if (args->error)
				return ;
			it = args->it;
		}
		*it = *str;
		++str;
		++it;
	}
	args->it = it;
}
