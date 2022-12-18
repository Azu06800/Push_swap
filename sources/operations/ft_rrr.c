/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:52:29 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrr(t_stack *stack)
{
	t_node	*preva;
	t_node	*prevb;
	int		*tmpa;
	int		*tmpb;

	tmpa = malloc(sizeof(int));
	tmpb = malloc(sizeof(int));
	*tmpa = *((int *) stack->a->last->content);
	*tmpb = *((int *) stack->b->last->content);
	preva = stack->a->last->prev;
	prevb = stack->b->last->prev;
	preva->next = NULL;
	prevb->next = NULL;
	list_add_front(stack->a, tmpa);
	list_add_front(stack->b, tmpb);
	list_remove(stack->a, stack->a->last, free);
	list_remove(stack->b, stack->b->last, free);
	stack->a->last = preva;
	stack->b->last = prevb;
	ft_putstr_fd("rrr\n", 1);
}
