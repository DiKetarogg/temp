/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:57:06 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 02:14:30 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JZ_TREE_H
# define JZ_TREE_H

# include "jz_tree_types.h"
# include <stddef.h>

void	*jz_tree_new(int nodes, int size);
int		jz_tree_get_arity(void *tree);
void	*jz_tree_get_nodes(void *);
void	jz_tree_delete(void *tree);

#endif
