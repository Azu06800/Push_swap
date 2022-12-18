/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 12:11:37 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_printf_ptr(va_list params, char flag)
{
	unsigned long	address;
	void			*ptr;
	int				size;

	(void) flag;
	ptr = (void *) va_arg(params, void *);
	address = (unsigned long) ptr;
	ft_putstr_fd("0x", 1);
	ft_putunbr_base_fd(address, "0123456789abcdef", 1);
	size = 0;
	if (address == 0)
		return (3);
	while (address != 0)
	{
		address /= 16;
		size++;
	}
	return (size + 2);
}
