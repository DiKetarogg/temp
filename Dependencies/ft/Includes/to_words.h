/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_words.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:22:31 by jzoltan           #+#    #+#             */
/*   Updated: 2022/02/02 08:27:57 by jzoltan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TO_WORDS_H
# define TO_WORDS_H

char	**to_words_new(char const *str);

char	**to_words_new_custom(char const *str,
			int (*space)(int), int (*not_space)(int));
#endif
