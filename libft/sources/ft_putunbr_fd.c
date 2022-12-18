/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:43:24 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_putunbr_fd_recursive(unsigned int nbr, int fd)
{
	if (nbr > 0)
	{
		ft_putunbr_fd_recursive(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}

void	ft_putunbr_fd(unsigned int nbr, int fd)
{
	if (nbr == 0)
		ft_putchar_fd(nbr + '0', fd);
	else
		ft_putunbr_fd_recursive(nbr, fd);
}
