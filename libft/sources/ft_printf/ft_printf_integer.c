/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:32:13 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../includes/libft.h"

int	ft_printf_integer(va_list params, char flag)
{
	size_t	size;
	int		i;

	(void) flag;
	size = 0;
	i = (int) va_arg(params, int);
	ft_putnbr_fd(i, 1);
	if (i == 0)
		return (1);
	if (i < 0)
		size++;
	while (i != 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}
