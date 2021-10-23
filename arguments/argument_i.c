/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 19:09:26 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_i(int number)
{
	char *string_int;
	int	counter;
	int	quantity_read;

	string_int = ft_itoa(number);
	quantity_read = 0;
	counter = ft_strlen(string_int);
	while (!counter)
	{
		write(1, string_int, 1);
		quantity_read++;
		string_int++;
		counter--;
	}
	return (quantity_read);
}
