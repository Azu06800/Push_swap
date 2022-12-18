/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 13:13:29 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	parse_array(t_stack *stacks, int ac, char **av, int start)
{
	size_t	i;
	int		*tmp;

	i = start;
	while (i < (size_t) ac)
	{
		if (!check_number(av[i]) && ft_strncmp(av[i], "-2147483648", 12))
		{
			ft_error();
			exit(1);
		}
		tmp = malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		list_add_back(stacks->a, tmp);
		i++;
	}
}

static void	parse_string(t_stack *stacks, char *arg)
{
	char	**words;
	size_t	i;

	words = ft_split(arg, ' ');
	i = 0;
	while (words[i] != NULL)
		i++;
	parse_array(stacks, i, words, 0);
	i = 0;
	while (words[i] != NULL)
		free(words[i++]);
	free(words);
}

t_stack	parse_args(int ac, char **av)
{
	t_stack	stacks;

	stacks = initialize_stack();
	if (ac == 2 && !check_number(av[1]))
		parse_string(&stacks, av[1]);
	else
		parse_array(&stacks, ac, av, 1);
	return (stacks);
}
