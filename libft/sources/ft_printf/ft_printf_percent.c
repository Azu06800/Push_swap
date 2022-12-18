/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:32:33 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../includes/libft.h"

int	ft_printf_percent(va_list params, char flag)
{
	(void) params;
	(void) flag;
	ft_putchar_fd('%', 1);
	return (1);
}
