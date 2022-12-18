/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:34:28 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../includes/libft.h"

void	list_clear(t_list *list, void (*del)(void*))
{
	t_node	*current;
	t_node	*tmp;

	if (list != NULL && del != NULL)
	{
		current = list->first;
		while (current != NULL)
		{
			tmp = current->next;
			list_remove(list, current, del);
			current = tmp;
		}
		free(list);
	}
}
