/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/25 00:26:24 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	type_s(char *string_print)
{
	int	counter;

	if (!string_print)
	{
		return (write(1, "(null)", ft_strlen("(null)")));
	}
	counter = ft_strlen(string_print);
	return (write(1, string_print, counter));
}
