/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:53:33 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ss(t_stack *stack)
{
	t_list	*a;
	t_list	*b;
	int		tmpa;
	int		tmpb;

	a = stack->a;
	b = stack->b;
	tmpa = *((int *) a->first->next->content);
	tmpb = *((int *) b->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) a->first->content) = tmpa;
	*((int *) b->first->content) = tmpb;
	ft_putstr_fd("ss\n", 1);
}
