/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:24:14 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 05:26:27 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detail_print.h"

void	ft_print_str(int fd, va_list *args_list)
{
	t_args		args;
	char const	*str = va_arg(*args_list, char const *);
	char		*end;
	char		*it;

	args = ft_print_get_args(fd);
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
