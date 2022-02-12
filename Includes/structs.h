/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:53:55 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 21:47:09 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_list
{
	int					data;
	int					order;
	struct s_list		*next;
}			t_list;

typedef struct s_sizes
{
	int	a;
	int	b;
}			t_sizes;

typedef struct s_punsh_swep
{
	t_list	*a;
	t_list	*b;
	t_sizes size;
} t_punshe_sweps;

typedef t_punshe_sweps	*t_punshe_swep;

#endif
