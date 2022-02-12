/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_get_args.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:29:49 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 06:24:52 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detail_types.h"
#include <stdint.h>

uint32_t	*ft_get_seed(void)
{
	static uint32_t	seed = (uint32_t)0xa4c92fda;

	return (&seed);
}

static t_args	ft_print_get_args_reserved(int fd)
{
	static struct s_args	args[2] = {{.end = args[0].buffer + FT_BUFFER_SIZE,
		.it = args[0].buffer, .lock = 0, .error = 0, .fd = 1},
	{.end = args[1].buffer + FT_BUFFER_SIZE,
		.it = args[1].buffer, .lock = 0, .error = 0, .fd = 2},
	};

	return (&args[fd - 1]);
}

t_args	ft_print_get_args(int fd)
{
	if (fd < 3 && fd > 0)
	{
		return (ft_print_get_args_reserved(fd));
	}
	return (0);
}
