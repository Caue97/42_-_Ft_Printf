/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:13:27 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 19:51:51 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_argument, ...)
{
	char	*through;
	int		c_read;
	
	through = NULL;
	c_read = 0;
	va_list	arguments;
	va_start (arguments, format_argument);
	
	through = (char *)format_argument;
	while (*through)
	{
		if (*through == '%')
		{
			through++;
			c_read += selector(through, arguments);
			through++;
		}
		ft_putchar(*through);
		c_read++;
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
		letters = type_p(va_arg(arg_list, unsigned long int), "0123456789abcdef");
	else if (*argument_letter == 'd')
		letters = type_d(va_arg(arg_list, int));
	else if (*argument_letter == 'i')
		letters = type_i(va_arg(arg_list, int));
	else if (*argument_letter == 'u')
		letters = type_u(va_arg(arg_list, unsigned int));
	else if (*argument_letter == 'x')
		letters = type_lower_x(va_arg(arg_list, unsigned int), "0123456789abcdef");
	else if (*argument_letter == 'X')
		letters = type_upper_x(va_arg(arg_list, unsigned int), "0123456789ABCDEF");
	else if (*argument_letter == '%')
		letters = write(1, "%", 1);
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
