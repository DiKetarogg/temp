/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:03:46 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 04:04:11 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detail_print.h"

void	ft_print_int(int fd, va_list *args_list)
{
	char	buffer[12];
	char	*b;
	int		arg;
	int		sign;

	b = buffer + 11;
	*b = 0;
	arg = va_arg(*args_list, int);
	sign = (arg < 0) * -2 + 1;
	*--b = arg % 10 * sign + '0';
	arg /= 10 * sign;
	while (arg)
	{
		*--b = arg % 10 + '0';
		arg /= 10;
	}
	if (sign < 0)
		*--b = '-';
	ft_print_save(fd, b);
}
