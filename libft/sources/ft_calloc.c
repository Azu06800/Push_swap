/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:36:34 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"

/**
 * La fonction ft_calloc() alloue la mémoire nécessaire pour
 * un tableau de nmemb éléments de size octets, et renvoie un pointeur
 * vers la mémoire allouée qui a été remplie avec des zéros.
 *
 * \param	nmemb	Le nombre d'élements du tableau.
 * \param	size	La taille des élements du tableau.
 * \return			L'adresse de l'espace mémoire alloué.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
