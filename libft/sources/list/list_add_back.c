/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 12:12:23 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	list_add_back(t_list *list, void *content)
{
	t_node	*head;
	t_node	*node;

	node = list_create_node(content);
	head = list->first;
	if (head == NULL)
		list->first = node;
	else
	{
		if (list->last == NULL)
			list->last = head;
		list->last->next = node;
		list->last = node;
		node->prev = list->last;
	}
	list->size++;
}
