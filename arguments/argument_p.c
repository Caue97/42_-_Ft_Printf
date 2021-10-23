/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 19:10:59 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_p(unsigned long hexadep, char *base_n)
{
	int	base_size;
	int	*hexadep_final;
	int	counter_01;
	int	quantity_read;

	hexadep_final = NULL;
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
		quantity_read = counter_01;
		quantity_read += write(1,"0x", 2);
		if (counter_01 == 0)
			quantity_read = write(1, "0", 1);
		while (--counter_01 >= 0)
			ft_putchar(base_n[hexadep_final[counter_01]]);
	}
	return (quantity_read);
}
