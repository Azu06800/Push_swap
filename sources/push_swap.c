/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 11:04:47 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stacks;
	t_tab	copy;

	stacks = parse_args(ac, av);
	copy = convert_to_tab(stacks.a);
	if (check_doubles(&copy))
	{
		if (!check_sorted(&copy))
		{
			normalize_stack(stacks.a);
			if (stacks.a->size > 5)
				sort_big_stack(&stacks);
			else
				sort_small_stack(&stacks);
		}
	}
	else
		ft_error();
	free(copy.v);
	list_clear(stacks.a, free);
	list_clear(stacks.b, free);
	return (0);
}
