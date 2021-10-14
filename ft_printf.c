/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:13:27 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/14 19:04:24 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format_argument, ...)
{
	char			*through;
	unsigned int	ascii_ar;
	
	through = NULL;
	ascii_ar = 0;
	
	va_list	arguments;
	va_start (arguments, format_argument);
	
	through = (char *)format_argument;
	while (*through)
	{
		through = (char *)format_argument;
		while (*through != '%')
		{
			write(1, &through, 10);
			through++;
		}
		
		
		//parte para selecionar a função em relação ao argumento
		
		through++;
	}
	va_end(arguments);
	return(1);
}

int	main()
{
	ft_printf("%d", 9);
	printf("%d", 9);
}
