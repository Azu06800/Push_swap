/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:37:47 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"

/**
 * La fonction ft_isascii() vérifie si c
 * est un caractère de la table ASCII.
 *
 * \param	c	Un caractère non-signé.
 * \return		Un entier à valeur booléenne.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
