/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:53:15 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sb(t_stack *stack)
{
	t_list	*b;
	int		tmp;

	b = stack->b;
	tmp = *((int *) b->first->next->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) b->first->content) = tmp;
	ft_putstr_fd("sb\n", 1);
}
