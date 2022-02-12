/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:44:49 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/11 06:11:04 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H
# define FTIO_H

# define FT_END 0
# define FT_INT 1
# define FT_STR 2
# define FT_FLUSH 3

int	ft_out(int type, ...);
int	ft_err(int type, ...);

int	ft_flush(int fd);

#endif
