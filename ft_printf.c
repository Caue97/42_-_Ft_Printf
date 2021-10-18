/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:13:27 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/18 16:08:56 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_argument, ...)
{
	char			*through;
	unsigned int	ascii_ar;
	int				c_read;
	
	through = NULL;
	ascii_ar = 0;
	c_read = 0;
	
	va_list	arguments;
	va_start (arguments, format_argument);
	
	through = (char *)format_argument;
	while (*through)
	{
		while (*through != '%')
		{
			putchar(through);
			c_read++;
			through++;
		}
		through++;
		c_read += selector(through, arguments);
		
		through++;
	}
	va_end(arguments);
	return(c_read);
}

int selector(char *argument_letter, va_list arg_list)
{
	int letters;
	
	letters = 0;
	if (*argument_letter == 'c')
		letters = type_c(va_arg(arg_list, int));
	else if (*argument_letter == 's')
		letters = type_s(va_arg(arg_list, char *));
	else if (*argument_letter == 'p')
		letters = type_p(va_arg(arg_list, unsigned long int));
	else if (*argument_letter == 'd')
		letters = type_d(va_arg(arg_list, int));
	else if (*argument_letter == 'i')
		letters = type_i(va_arg(arg_list, int));
	else if (*argument_letter == 'u')
		letters = type_u(va_arg(arg_list, unsigned int));
	else if (*argument_letter == 'x')
		letters = type_lower_x(va_arg(arg_list, unsigned int));
	else if (*argument_letter == 'X')
		letters = type_upper_x(va_arg(arg_list, unsigned int));
	else if (*argument_letter == '%')
	{
		write(1, '%', 1);
		letters = 1;
	}
	else 
	{
		printf("ERROR: Argument type, letter after %%, not valid");
		return (0);
	}
	return (letters);
}

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}
