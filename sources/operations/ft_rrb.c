/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:52:17 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrb(t_stack *stack)
{
	t_node	*prev;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->last->content);
	prev = stack->b->last->prev;
	prev->next = NULL;
	list_add_front(stack->b, tmp);
	list_remove(stack->b, stack->b->last, free);
	stack->b->last = prev;
	ft_putstr_fd("rrb\n", 1);
}
