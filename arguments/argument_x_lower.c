/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_x_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/22 19:52:36 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	type_lower_x(unsigned long hexadec, char *base_num)
{
	int    base_size;
    int    *hexadec_final;
    int    counter_01;
    int    quantity_read;

    counter_01 = 0;
    base_size = 0;
    quantity_read = 0;
    hexadec = (unsigned int)hexadec;
    if (base_check(base_num))
    {
        base_size = ft_strlen(&base_num[base_size]);
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

int	base_check(char *base)
{
    int    counter_tf;
    int    counter_c;

    counter_tf = 0;
    counter_c = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[counter_tf])
    {
        counter_c = counter_tf + 1;
        if (base[counter_tf] < 32 || base[counter_tf] > 126)
            return (0);
        while (base[counter_c])
        {
            if (base[counter_tf] == base[counter_c])
                return (0);
            counter_c++;
        }
        counter_tf++;
    }
    return (1);
}
