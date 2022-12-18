/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:46:10 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	if (n == 0)
		return (0);
	s1_bis = (unsigned char *) s1;
	s2_bis = (unsigned char *) s2;
	while (*s1_bis && *s2_bis && *s1_bis == *s2_bis && n > 1)
	{
		s1_bis++;
		s2_bis++;
		n--;
	}
	return (*s1_bis - *s2_bis);
}
