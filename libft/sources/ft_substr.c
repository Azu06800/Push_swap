/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:47:21 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Alloue et retourne une chaine de caractères issue de
 * la chaine ’s’. Cette nouvelle chaine commence à l’index
 * ’start’ et a pour taille maximale ’len’.
 *
 * \param	s		La chaine depuis laquelle extraire la nouvelle.
 * \param	start	L’index de début  dans la chaine ’s’.
 * \param	len		La taille maximale de la nouvelle chaine.
 * \return			La nouvelle chaine de caractères.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sptr = (char *) ft_calloc(len + 1, 1);
	if (!sptr)
		return (NULL);
	ft_strlcpy(sptr, s + start, len + 1);
	return (sptr);
}
