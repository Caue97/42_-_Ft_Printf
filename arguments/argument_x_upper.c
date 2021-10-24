/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_x_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 20:09:46 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_upper_x(unsigned long hexadec, char *base_num)
{
	int	base_size;
	int	*hexadec_final;
	int	counter_01;
	int	quantity_read;

	hexadec_final = NULL;
	counter_01 = 0;
	base_size = 0;
	quantity_read = 0;
	hexadec = (unsigned int)hexadec;
	if (base_check(base_num))
	{
		base_size = ft_strlen(base_num);
		while (hexadec)
		{
			hexadec_final[counter_01] = hexadec % base_size;
			hexadec = hexadec / base_size;
			counter_01++;
		}
		quantity_read = counter_01;
		if (counter_01 == 0)
			quantity_read = write(1, "0", 1);
		while (--counter_01 >= 0)
			ft_putchar(base_num[hexadec_final[counter_01]]);
	}
	return (quantity_read);
}
