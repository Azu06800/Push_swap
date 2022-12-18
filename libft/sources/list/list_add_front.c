/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 12:12:26 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_add_front(t_list *list, void *content)
{
	t_node	*head;
	t_node	*last;
	t_node	*node;

	head = list->first;
	node = list_create_node(content);
	if (head == NULL)
		list->first = node;
	else
	{
		last = list->last;
		if (last == NULL)
			last = head;
		node->next = head;
		head->prev = node;
		list->first = node;
		list->last = last;
	}
	list->size++;
}
