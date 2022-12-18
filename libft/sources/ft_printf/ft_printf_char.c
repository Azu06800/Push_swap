/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 12:11:16 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_printf_char(va_list params, char flag)
{
	char	c;

	(void) flag;
	c = (char) va_arg(params, int);
	ft_putchar_fd(c, 1);
	return (1);
}
