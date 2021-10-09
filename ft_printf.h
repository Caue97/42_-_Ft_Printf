/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:17:06 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/09 20:12:23 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include "libft/libft.h"

# include <stdio.h>
# include <stdarg.h>

/**
 * @brief 
 * 
 * @param format_argument checks in which format to print the list of subsequent arguments
 * @param ... list with a variable quantity of arguments
 * 
 * @return if the function worked or not
 */
int	ft_printf_base(const char *format_argument, ...);

#endif
