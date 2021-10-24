/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:16:07 by felcaue-          #+#    #+#             */
/*   Updated: 2021/10/23 20:05:22 by felcaue-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char *uns_itoa(unsigned int number);
static void	convt_to_number(int n_conv, char *d_str, long int length);

int type_u(unsigned int uns_number)
{
	char *string_u;
	int	counter;
	int	quantity_read;

	string_u = uns_itoa(uns_number);
	counter = ft_strlen(string_u);
	quantity_read = write(1, string_u, counter);
	free(string_u);
	return (quantity_read);
}

char *uns_itoa(unsigned int number)
{
	char			*ret_strng;
	unsigned int	num_og_c;
	long int		len_count;

	num_og_c = number;
	len_count = 0;
	ret_strng = NULL;
	while (num_og_c)
	{
		num_og_c = (num_og_c / 10);
		len_count++;
	}
	ret_strng = malloc(sizeof(char) * (len_count + 1));
	if (!ret_strng)
	{
		return (NULL);
	}
	ret_strng[len_count] = 0;
	convt_to_number(number, ret_strng, (len_count - 1));
	return (ret_strng);
}

static void	convt_to_number(int n_conv, char *d_str, long int length)
{
	unsigned int	n_holder;

	n_holder = n_conv;
	if (n_holder >= 10)
	{
		convt_to_number((n_holder / 10), d_str, (length - 1));
	}
	d_str[length] = (n_holder % 10) + '0';
}
