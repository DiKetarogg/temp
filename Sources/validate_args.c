/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:44:38 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 20:55:01 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft.h>
#include <jz_string.h>

static int      ft_validate_arg_value(char const *str)
{
	char const		*max[2] = {"2147483647", "2147483648"};
	int				i; 
	char const		*compare = max[0];

	i = 0;
	if (*str == '-')
	{
		compare = max[1];
		++str;
	}
	while (ft_isdigit(str[i]))
	{
		if (str[i] > compare[i])
		{
			while (i != 10 && ft_isdigit(str[i]))
				++i;
			return (i > 9 || str[i] || str[i] > compare[i]);
		}
		++i;
	}
	return (str[i]);
}

static int ft_extract_array_internal(char **strs, int **array)
{
	int	i;
	int	k;

	k = 0;
	while (strs[k])
		++k;
	*array = malloc(sizeof(int) * k);
	if (!array || ft_validate_arg_value(strs[0]))
		return (0);
	(*array)[0] = ft_atoi(strs[0]);
	i = 0;
	while (strs[++i])
	{
		if (ft_validate_arg_value(strs[i]))
			return (0);
		k = 0;
		(*array)[i] = ft_atoi(strs[i]);
		while (k < (i - 1) && (*array)[k] != (*array)[i])
			++k;
		if ((*array)[k] == (*array)[i])
			return (0);
	}
	return (i);
}

int	ft_extract_array(int **array, int argc, char *const *argv)
{
	t_jz_string	string;
	int			i;
	char		*temp;
	char		**args;
	int			size;

	string = jz_string_new(4096);
	if (!string)
		return (0);
	i = 0;
	while (i != argc)
	{
		jz_string_append_str(string, argv[i]);
		jz_string_append_char(string, ' ');
		++i;
	}
	temp = jz_string_cstr(string);
	jz_string_delete(string);
	if (!temp)
		return (0);
	args = ft_split(temp);
	free(temp);
	size = ft_extract_array_internal(args, array);
	free(args);
	return (size);
}
