/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/24 22:12:07 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	type_d(int number)
{
	char	*string_d;
	int		counter;
	int		quantity_read;

	string_d = ft_itoa(number);
	counter = ft_strlen(string_d);
	quantity_read = write(1, string_d, counter);
	free(string_d);
	return (quantity_read);
}
