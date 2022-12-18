/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:45:59 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Applique la fonction ’f’ à chaque caractère de la chaine de
 * caractères passée en argument pour créer une nouvelle chaine
 * de caractères résultant des applications successives de ’f’.
 *
 * \param	s	La chaine de caractères sur laquelle itérer.
 * \param	f	La fonction à appliquer à chaque caractère.
 * \return		La chaine de caractères résultant des applications de f.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	sptr = (char *) ft_calloc(ft_strlen(s) + 1, 1);
	if (!sptr)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		sptr[i] = f(i, s[i]);
		i++;
	}
	sptr[i] = 0;
	return (sptr);
}
