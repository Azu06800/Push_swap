/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:33:05 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../includes/libft.h"

int	ft_printf_string(va_list params, char flag)
{
	char	*pstr;

	(void) flag;
	pstr = (char *) va_arg(params, char *);
	if (pstr != NULL)
	{
		ft_putstr_fd(pstr, 1);
		return (ft_strlen(pstr));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
