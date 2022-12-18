/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:51:47 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rr(t_stack *stack)
{
	t_node	*nexta;
	t_node	*nextb;
	int		*tmpa;
	int		*tmpb;

	tmpa = (int *) malloc(sizeof(int));
	tmpb = (int *) malloc(sizeof(int));
	*tmpa = *((int *) stack->a->first->content);
	*tmpb = *((int *) stack->b->first->content);
	nexta = stack->a->first->next;
	nextb = stack->b->first->next;
	list_add_back(stack->a, &tmpa);
	list_add_back(stack->b, &tmpb);
	list_remove(stack->a, stack->a->first, free);
	list_remove(stack->b, stack->b->first, free);
	stack->a->first = nexta;
	stack->b->first = nextb;
	ft_putstr_fd("rr\n", 1);
}
