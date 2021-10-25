/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/24 22:12:37 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	type_i(int number)
{
	char	*string_i;
	int		counter;
	int		quantity_read;

	string_i = ft_itoa(number);
	counter = ft_strlen(string_i);
	quantity_read = write(1, string_i, counter);
	free(string_i);
	return (quantity_read);
}
