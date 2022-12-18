/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:52:03 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_stack *stack)
{
	t_node	*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->last->content);
	node = stack->a->last->prev;
	node->next = NULL;
	stack->a->last = node;
	list_add_front(stack->a, tmp);
	ft_putstr_fd("rra\n", 1);
}
