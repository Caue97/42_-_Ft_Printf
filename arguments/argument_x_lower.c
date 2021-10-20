/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_x_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/18 17:12:40 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int type_lower_x()
{
	
}

/*
int    check_base( char *base)
{
    int    i;
    int    z;

    i = 0;
    z = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        z = i + 1;
        if (base[i] < 32 || base[i] > 126)
            return (0);
        while (base[z])
        {
            if (base[i] == base[z])
                return (0);
            z++;
        }
        i++;
    }
    return (1);
}

int    ft_printf_x(unsigned long nbr, char *base)
{
    int    size_base;
    int    nbr_final[100];
    int    i;
    int    ret;

    i = 0;
    size_base = 0;
    ret = 0;
    nbr = (unsigned int)nbr;
    if (check_base(base))
    {
        size_base = ft_strlen(&base[size_base]);
        while (nbr)
        {
            nbr_final[i] = nbr % size_base;
            nbr = nbr / size_base;
            i++;
        }
        ret = i;
        if (i == 0)
            ret = write(1, "0", 1);
        while (--i >= 0)
            ft_putchar_fd(base[nbr_final[i]], 1);
    }
    return (ret);
}
*/