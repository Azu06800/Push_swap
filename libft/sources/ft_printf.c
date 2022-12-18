/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:42:12 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_printf_check(const char flag)
{
	return (ft_strchr("cspdiuxX%", flag) != 0);
}

static int	ft_printf_switch(va_list params, const char flag)
{
	int	(*ft_printf[128])(va_list, char);

	ft_printf['c'] = &ft_printf_char;
	ft_printf['s'] = &ft_printf_string;
	ft_printf['p'] = &ft_printf_ptr;
	ft_printf['d'] = &ft_printf_decimal;
	ft_printf['i'] = &ft_printf_integer;
	ft_printf['u'] = &ft_printf_udecimal;
	ft_printf['x'] = &ft_printf_hex;
	ft_printf['X'] = &ft_printf_hex;
	ft_printf['%'] = &ft_printf_percent;
	return (ft_printf[(int) flag](params, flag));
}

int	ft_printf(const char *format, ...)
{
	va_list	params;
	int		size;

	size = 0;
	va_start(params, format);
	while (*format)
	{
		if (*format == '%' && ft_printf_check(*(format + 1)))
			size += ft_printf_switch(params, *(++format));
		else
		{
			ft_putchar_fd(*format, 1);
			size++;
		}
		format++;
	}
	va_end(params);
	return (size);
}
