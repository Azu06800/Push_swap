/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 11:01:21 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_doubles(t_tab *tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < tab->size)
	{
		j = i + 1;
		while (j < tab->size)
		{
			if (tab->v[i] == tab->v[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sorted(t_tab *tab)
{
	int	i;

	i = 0;
	while (i + 1 < tab->size)
	{
		if (tab->v[i] > tab->v[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_number(const char *nptr)
{
	int				nbr;
	size_t			digits;
	size_t			i;

	i = 0;
	nbr = 0;
	digits = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		digits++;
		if ((nbr * 10 + (nptr[i] - '0')) / 10 != nbr)
			return (0);
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return (!nptr[i] && digits);
}
