/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:13:27 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/09 20:22:25 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_base(const char *format_argument, ...)
{
	char			*through;
	unsigned int	ascii_ar;
	
	through = NULL;
	ascii_ar = 0;
	
	va_list arguments;
	va_start (arguments, format_argument);
	
	while (*through != NULL)
	{
		through = format_argument;
		while (*through != '%')
		{
			//ft_putchar(*through);
			through++;
		}
		through++;

		// parte para selecionar a função em relação ao argumento

		through++;
	}
	va_end(arguments);
	return(1);
}
