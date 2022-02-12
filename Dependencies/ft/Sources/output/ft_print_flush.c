/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:03:48 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 04:14:36 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detail_print.h"
#include <unistd.h>

void	ft_print_flush(int fd)
{
	t_args	args;

	args = ft_print_get_args(fd);
	args->error = write(fd,
			args->buffer, (size_t)args->it - (size_t)args->buffer) > -1;
	args->it = args->buffer;
}

int	ft_flush(int fd)
{
	t_args	args;

	args = ft_print_get_args(fd);
	if (!args)
		return (0);
	ft_print_flush(fd);
	return (args->error);
}
