/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:17:06 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 18:29:41 by felcaue-         ###   ########.fr       */
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
void	ft_putchar(char ch);

/**
 * @brief This function selects how to print the text for the argument based on
 *  the letter after % and counts the number of things printed in that argument.
 * 
 * @param argument_letter the letter of the current argument being read (letter after %_)
 * @param arg_list list of things to substitute the argument
 * 
 * @return the number of things read in the argument 
 */
int		selector(char *argument_letter, va_list arg_list);

/**
 * @brief Recreation of the printf function
 * 
 * @param format_argument checks in which format to print the list of subsequent arguments
 * @param ... list with a variable quantity of arguments
 * 
 * @return if the function worked or not
 */
int		ft_printf(const char *format_argument, ...);

/**
 * @brief Treats the argument %c in the function ft_printf
 * 
 * @param printing the character passed to print
 * @return the quantity of characters printed
 */
int		type_c(char printing);

/**
 * @brief Treats the argument %d in the function ft_printf
 * 
 * @param number the decimal based number passed to print
 * @return the quantity of characters printed
 */
int		type_d(int number);

/**
 * @brief Treats the argument %i in the function ft_printf
 * 
 * @param number the decimal based int passed to print
 * @return the quantity of characters printed
 */
int		type_i(int number);

/**
 * @brief Treats the argument %s in the function ft_printf
 * 
 * @param string_print the string passed to print
 * @return the quantity of characters printed
 */
int		type_s(char *string_print);

/**
 * @brief Treats the argument %u in the function ft_printf
 * 
 * @param uns_number the (unsigned int) number passed to print
 * @return the quantity of characters printed 
 */
int		type_u(unsigned int uns_number);

/**
 * @brief Treats the argument %x in the function ft_printf
 * 
 * @param hexadec the hexadecimal information passed to print
 * @param base_num the hexadecimal base used
 * @return the quantity of characters printed 
 */
int		type_lower_x(unsigned long hexadec, char *base_num);

/**
 * @brief Treats the argument %X in the function ft_printf
 * 
 * @param hexadec the hexadecimal information passed to print
 * @param base_num the hexadecimal base used
 * @return the quantity of characters printed 
 */
int		type_upper_x(unsigned long hexadec, char *base_num);

/**
 * @brief Treats the argument %p in the function ft_printf
 * 
 * @param hexadep the void pointer information passed to print the adress of the pointer
 * in hexadecimal
 * @param base_n the hexadecimal base used
 * @return the quantity of characters printed 
 */
int type_p(unsigned long hexadep, char *base_n);

/**
 * @brief Used in the functions, inside ft_printf, that treat the %x and %X argument
 * they check to see if the base we passed for the function is viable
 * 
 * @param base is a string with the all elements of the numerical base inside it
 * @return If the base is viable or not
 */
int		base_check(char *base);

#endif
