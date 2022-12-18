/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:36:14 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"

/**
 * La  fonction bzero() met à 0 les n premiers octets
 * de l'espace mémoire pointé par s.
 *
 * \param	s	L'adresse d'un espace mémoire.
 * \param	n	Le nombre d'octets à mettre à 0.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
