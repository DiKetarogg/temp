/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_detail.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:54 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/09 21:34:44 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jz_string.h"

static int	jz_string_detail_add_str_internal(t_jz_string string)
{
	char	**strs;
	size_t	i;

	if (string->strings_count == string->strs_size)
	{
		strs = malloc(sizeof(char *) * (string->strs_size * 2));
		if (!strs)
			return (0);
		string->strs_size *= 2;
		i = 0;
		while (i != string->strings_count)
		{
			strs[i] = string->strs[i];
			++i;
		}
		free(string->strs);
		string->strs = strs;
	}
	string->strs[string->strings_count] = (char *){
		malloc(string->app_size * sizeof(char))};
	if (!string->strs[string->strings_count])
		return (0);
	++string->strings_count;
	return (1);
}

int	jz_string_detail_add_str(t_jz_string string)
{
	if (string->cur_c == string->app_size)
	{
		++string->cur_str;
		string->cur_c = 0;
	}
	if (string->strings_count == string->cur_str)
	{
		if (!jz_string_detail_add_str_internal(string))
			return (0);
	}
	return (1);
}
