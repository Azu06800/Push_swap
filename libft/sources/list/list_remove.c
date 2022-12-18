/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:35:14 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../includes/libft.h"

void	list_remove(t_list *list, t_node *node, void (*del)(void*))
{
	if (node != NULL)
	{
		del(node->content);
		free(node);
		list->size--;
	}
}
