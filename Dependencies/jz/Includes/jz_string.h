/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:54:48 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/09 21:21:34 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JZ_STRING_H
# define JZ_STRING_H

# include <stdlib.h>

struct s_jz_string
{
	char			**strs;
	size_t			strings_count;
	size_t			cur_str;
	size_t			cur_c;
	size_t const	app_size;
	size_t			strs_size;
};

typedef struct s_jz_string			*t_jz_string;

struct s_jz_string_iterator
{
	t_jz_string		string;
	char			*it;
	char			*end;
	size_t const	start_str;
	size_t const	start_c;
	size_t const	end_c;
};

typedef struct s_jz_string_iterator	t_jz_string_iterator;

t_jz_string				jz_string_new(size_t app_size);

void					jz_string_delete(t_jz_string string);

int						jz_string_detail_add_str(t_jz_string string);

int						jz_string_append_char(t_jz_string string, char c);
int						jz_string_append_str(t_jz_string string,
							char const *str);
int						jz_string_append_fd(t_jz_string string, int fd);

char					*jz_string_cstr(t_jz_string string);

int						jz_string_begin(t_jz_string string,
							t_jz_string_iterator *iterator);
int						jz_string_next_iterator(
							t_jz_string_iterator *iterator);
int						jz_string_make_iterator(t_jz_string string,
							t_jz_string_iterator *iterator, size_t start);
void					jz_string_iterator_copy(t_jz_string_iterator *dest,
							t_jz_string_iterator const *src);

size_t					jz_string_iterator_index(t_jz_string_iterator const
							*iterator);

size_t					jz_string_size(t_jz_string string);

int						jz_string_last(t_jz_string string);

#endif
