/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:45:04 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Alloue et retourne une nouvelle chaine,
 * résultat de la concaténation de s1 et s2.
 *
 * \param	s1	La chaine de caractères préfixe.
 * \param	s2	La chaine de caractères suffixe.
 * \return 		La nouvelle chaine de caractères.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*sptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	sptr = (char *) ft_calloc(s1_len + s2_len + 1, 1);
	if (!sptr)
		return (NULL);
	ft_strcpy(sptr, s1);
	ft_strcat(sptr, s2);
	return (sptr);
}
