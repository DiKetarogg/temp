/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:08:28 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 04:30:10 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_print_flush_arg.h"
#include "detail_print.h"

static void	ft_print_do(int fd, va_list *args_list, int type)
{
	static void (*const	t[])(int, va_list *) = {
		0, ft_print_int, ft_print_str, ft_print_flush};

	t[type](fd, args_list);
}

int	ft_err(int type, ...)
{
	va_list	args_list;
	t_args	args;

	args = ft_print_get_args(2);
	if (!args)
		return (0);
	va_start(args_list, type);
	if (args->error)
		return (0);
	while (args->lock)
		;
	args->lock = 1;
	while (type)
	{
		if (args->error)
		{
			args->lock = 1;
			return (0);
		}
		ft_print_do(2, &args_list, type);
		type = va_arg(args_list, int);
	}
	va_end(args_list);
	args->lock = 0;
	return (1);
}

int	ft_out(int type, ...)
{
	va_list	args_list;
	t_args	args;

	args = ft_print_get_args(1);
	if (!args)
		return (0);
	va_start(args_list, type);
	if (args->error)
		return (0);
	while (args->lock)
		;
	args->lock = 1;
	while (type)
	{
		if (args->error)
		{
			args->lock = 1;
			return (0);
		}
		ft_print_do(1, &args_list, type);
		type = va_arg(args_list, int);
	}
	va_end(args_list);
	args->lock = 0;
	return (1);
}
