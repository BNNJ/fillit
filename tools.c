/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 14:21:43 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/19 14:21:46 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*create_grid(int size)
{
	char	*grid;
	int		i;

	i = 0;
	if (!(grid = (char *)malloc(sizeof(char) * (size * size + 1))))
		return (0);
	grid[size * size] = '\0';
	while (i < size * size)
	{
		grid[i] = '.';
		++i;
	}
	return (grid);
}

void	print_grid(char *grid, int size)
{
	int	i;

	i = 0;
	while (grid[i])
	{
		write(1, grid + i, size);
		write(1, "\n", 1);
		i += size;
	}
}

int		min_grid_size(int pce_nbr)
{
	int	size;

	size = 1;
	while (size * size <= pce_nbr * 4)
	{
		if (size * size == pce_nbr * 4)
			return (size);
		++size;
	}
	return (size);
}
