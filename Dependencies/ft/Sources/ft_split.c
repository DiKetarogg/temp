/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:24:24 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 06:04:06 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdlib.h>
#include "pair.h"

static t_pair_ii	ft_strlen_words(char const *str, int (*space)(int),
			int (*not_space)(int))
{
	t_pair_ii	lw;

	lw = (t_pair_ii){0, 0};
	while (*str)
	{
		while (space(*str))
			++str;
		lw.second += not_space(*str);
		while (not_space(*str))
		{
			++str;
			++lw.first;
		}
	}
	return (lw);
}

char	**ft_split_custom(char const *str,
		int (*space)(int), int (*not_space)(int))
{
	t_pair_ii const	lw = ft_strlen_words(str, space, not_space);
	char			**words;
	char			**w_it;
	char			*it;

	words = malloc((lw.first + lw.second) * sizeof(char)
			+ (lw.second + 1) * sizeof(char *));
	w_it = words;
	it = (char *)(words + lw.second + 1);
	while (*str)
	{
		while (space(*str))
			++str;
		if (!*str)
			break ;
		*w_it = it;
		++w_it;
		while (not_space(*str))
			*it++ = *str++;
		*it = 0;
		++it;
	}
	*w_it = 0;
	return (words);
}

char	**ft_split(char const *str)
{
	return (ft_split_custom(str, ft_isspace, ft_isntspace));
}
