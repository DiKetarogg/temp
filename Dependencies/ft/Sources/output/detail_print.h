/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detail_print.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:03:56 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 04:02:59 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETAIL_PRINT_H
# define DETAIL_PRINT_H

# include "detail_types.h"
# include <stdarg.h>
# include <stddef.h>

void	ft_print_int(int fd, va_list *args);
void	ft_print_str(int fd, va_list *args);

# ifdef FT_PRINT_FLUSH_ARG_H

void	ft_print_flush(int fd, va_list *args);

# else

void	ft_print_flush(int fd);

# endif

t_args	ft_print_get_args(int fd);

void	ft_print_save(int fd, char const *str);

#endif
