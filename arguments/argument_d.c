/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/19 21:42:06 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_d(int number)
{
	char *string_d;
	int	counter;
	int	quantity_read;

	string_d = itoa(number);
	quantity_read = 0;
	counter = ft_strlen(string_d);
	while (!counter)
	{
		write(1, string_d, 1);
		quantity_read++;
		string_d++;
		counter--;
	}
	return (quantity_read);
}
