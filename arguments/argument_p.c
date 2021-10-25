/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/25 00:25:37 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	type_p_2(int quantity_read, int	counter);

int	type_p(unsigned long hexadep, char *base_n)
{
	int	base_size;
	int	hexadep_final[16];
	int	counter_01;
	int	quantity_read;

	if (!hexadep)
		return (write(1, "0x0", 3));
	counter_01 = 0;
	base_size = 0;
	quantity_read = 0;
	if (base_check(base_n))
	{
		base_size = ft_strlen(&base_n[base_size]);
		while (hexadep)
		{
			hexadep_final[counter_01] = hexadep % base_size;
			hexadep = hexadep / base_size;
			counter_01++;
		}
		quantity_read = type_p_2(quantity_read, counter_01);
		while (--counter_01 >= 0)
			ft_putchar(base_n[hexadep_final[counter_01]]);
	}
	return (quantity_read);
}

int	type_p_2(int quantity_read, int	counter)
{
	quantity_read = counter;
	quantity_read += write(1, "0x", 2);
	if (counter == 0)
	{
		quantity_read = write(1, "0", 1);
	}
	return (quantity_read);
}
