/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 11:03:40 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	initialize_stack(void)
{
	t_stack	stack;

	stack.a = list_create();
	stack.b = list_create();
	return (stack);
}

void	normalize_stack(t_list	*stack)
{
	t_node	*current;
	t_tab	copy;
	int		index;
	int		*value;

	copy = convert_to_tab(stack);
	sort_tab(&copy);
	current = stack->first;
	while (current != NULL)
	{
		index = find_index_in_tab(&copy, *((int *) current->content));
		value = malloc(sizeof(int));
		*value = index;
		free(current->content);
		current->content = value;
		current = current->next;
	}
	free(copy.v);
}
