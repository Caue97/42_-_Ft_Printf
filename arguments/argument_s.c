/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/18 16:47:45 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_s(char *string_print)
{
	int	counter;
	int	quantity_read;

	quantity_read = 0;
	counter = ft_strlen(string_print);
	while (!counter)
	{
		write(1, string_print, 1);
		quantity_read++;
		string_print++;
		counter--;
	}
	return (quantity_read);
}
