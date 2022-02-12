/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_string_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:56:57 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/09 21:35:22 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jz_string.h"

void	jz_string_delete(t_jz_string string)
{
	size_t	i;

	i = 0;
	while (i != string->strings_count)
	{
		free(string->strs[i]);
		++i;
	}
	free(string->strs);
	free(string);
}
