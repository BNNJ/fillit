/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:29:29 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/08 17:29:31 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		set_to_size(t_tetr *list, int size)
{
	t_tetr	*tmp;

	tmp = list;
	while (tmp)
	{
		tmp->fct(tmp, size);
		tmp = tmp->next;
	}
}

static void		fillit(char *file_name)
{
	t_tetr	*list;
	char	*grid;
	int		size;
	int		pce_nbr;

	list = 0;
	if ((pce_nbr = read_file(file_name, &list)) == -1 || pce_nbr > 26)
	{
		write(1, "error\n", 6);
		return ;
	}
	size = min_grid_size(pce_nbr);
	grid = create_grid(size);
	set_to_size(list, size);
	while (solve(grid, list, size) == 0)
	{
		++size;
		free(grid);
		grid = create_grid(size);
		set_to_size(list, size);
	}
	print_grid(grid, size);
	free(grid);
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "usage:\t./fillit target_file\n", 28);
	else
		fillit(argv[1]);
	return (0);
}
