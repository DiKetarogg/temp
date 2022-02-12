/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:54:02 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 23:28:58 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "structs.h"
# include <ft.h>
# include <ftio.h>

void		ft_list_addfront(t_list **lst, t_list *node);
t_list		*ft_list_last(t_list *node);
int			ft_list_len(t_list *node);
t_list		*ft_list_mid(t_list **list);
t_list		*ft_list_new(int data);
t_list		*ft_list_prelast(t_list *stack);
void		ft_lists_addback(t_list **lists, t_list *other);

void		clear_list(t_list **stack_a);

void		swap_sa(t_punshe_swep swep);
void		swap_sb(t_punshe_swep swep);
void		swap_ss(t_punshe_swep swep);
void		swap_pb(t_punshe_swep swep);
void		swap_pa(t_punshe_swep swep);
void		swap_ra(t_punshe_swep swep);
void		swap_rb(t_punshe_swep swep);
void		swap_rr(t_punshe_swep swep);
void		swap_rra(t_punshe_swep swep);
void		swap_rrb(t_punshe_swep swep);
void		swap_rrr(t_punshe_swep swep);

void		swap_sa_silent(t_punshe_swep swep);
void		swap_sb_silent(t_punshe_swep swep);
void		swap_ra_silent(t_punshe_swep swep);
void		swap_rb_silent(t_punshe_swep swep);
void		swap_rra_silent(t_punshe_swep swep);
void		swap_rrb_silent(t_punshe_swep swep);

void		arr_sort(int **array, int len);
void		sort_two(t_punshe_swep swep);
void		sort_three(t_punshe_swep swep);
void		sort_four(t_punshe_swep swep);
void		sort_five(t_punshe_swep swep);
void		big_sort(t_punshe_swep swep);
void		ft_sort(t_punshe_swep swep);

int			*new_arr(t_list *stack_b, int size);
int			sort_steps(t_list *stack_b, int max_value, int size);
int			max_value(t_list *stack_b);
int			min_value(t_list *stack_b);

int			ft_extract_array(int **array, int argc, char *const *argv);
#endif
