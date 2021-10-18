/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:17:06 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/18 16:05:00 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include "libft/libft.h"

# include <stdio.h>
# include <stdarg.h>

/**
 * @brief Print a Character in the Terminal.
 * 
 * @param ch The char to be printed
 */
void ft_putchar(char ch);

/**
 * @brief This function selects how to print the text for the argument based on
 *  the letter after % and counts the number of things printed in that argument.
 * 
 * @param argument_letter the letter of the current argument being read (letter after %_)
 * @param arg_list list of things to substitute the argument
 * 
 * @return the number of things read in the argument 
 */
int selector(char *argument_letter, va_list arg_list);

/**
 * @brief Recreation of the printf function
 * 
 * @param format_argument checks in which format to print the list of subsequent arguments
 * @param ... list with a variable quantity of arguments
 * 
 * @return if the function worked or not
 */
int	ft_printf(const char *format_argument, ...);

#endif
