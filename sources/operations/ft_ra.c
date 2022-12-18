/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:50:45 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_stack *stack)
{
	t_node	*next;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->first->content);
	next = stack->a->first->next;
	list_add_back(stack->a, tmp);
	list_remove(stack->a, stack->a->first, free);
	stack->a->first = next;
	ft_putstr_fd("ra\n", 1);
}
