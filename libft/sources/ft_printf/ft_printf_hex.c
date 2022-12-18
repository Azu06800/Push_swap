/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 12:11:27 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_printf_hex(va_list params, char flag)
{
	unsigned int	d;
	int				size;

	d = (unsigned int) va_arg(params, unsigned int);
	if (ft_isupper(flag))
		ft_putunbr_base_fd(d, "0123456789ABCDEF", 1);
	if (ft_islower(flag))
		ft_putunbr_base_fd(d, "0123456789abcdef", 1);
	size = 0;
	if (d == 0)
		return (1);
	while (d != 0)
	{
		d /= 16;
		size++;
	}
	return (size);
}
