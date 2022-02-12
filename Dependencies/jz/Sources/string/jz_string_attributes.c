/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_string_attributes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:13:21 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/09 21:35:14 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jz_string.h"

size_t	jz_string_size(t_jz_string string)
{
	return (string->cur_c + string->cur_str * string->app_size);
}
