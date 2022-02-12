/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jz_tree_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:51:27 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 01:52:59 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	jz_tree_get_arity(void *tree)
{
	return (*((int *)tree - 1));
}

void	*jz_tree_get_nodes(void *tree)
{
	int const	info = jz_tree_get_arity(tree);

	return ((void **)((int *)tree - 1) - info);
}
