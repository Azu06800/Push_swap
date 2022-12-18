/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:44:44 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Applique la fonction f à chaque caractère de la
 * chaîne de caractères transmise comme argument, et
 * en passant son index comme premier argument. Chaque
 * caractère est transmis par adresse à f pour être
 * modifié si nécessaire.
 *
 * \param	s	La chaine de caractères sur laquelle itérer.
 * \param	f	La fonction à appliquer à chaque caractère.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}
