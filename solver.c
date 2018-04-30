/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 23:42:02 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/19 23:42:04 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	place_piece(t_tetr *piece, char *grid)
{
	grid[POS0] = NAME;
	grid[POS1] = NAME;
	grid[POS2] = NAME;
	grid[POS3] = NAME;
}

static void	delete_piece(char *grid, t_tetr *piece)
{
	grid[POSG + POS0] = '.';
	grid[POSG + POS1] = '.';
	grid[POSG + POS2] = '.';
	grid[POSG + POS3] = '.';
}

static int	match_to_grid(t_tetr *piece, char *grid, int i, int size)
{
	return (grid[POS0] == '.'
		&& grid[POS1] == '.'
		&& grid[POS2] == '.'
		&& grid[POS3] == '.'
		&& (i + POS0) % size >= LOFF
		&& i % size < ROFF);
}

static int	get_last_pos(t_tetr *piece, int type)
{
	while (PREV)
	{
		piece = PREV;
		if (TYPE == type)
			return (POSG);
	}
	return (0);
}

int			solve(char *grid, t_tetr *piece, int size)
{
	int	i;

	if (piece == 0)
		return (1);
	i = get_last_pos(piece, TYPE);
	while (i < IMAX)
	{
		if (match_to_grid(piece, grid + i, i, size))
		{
			place_piece(piece, grid + i);
			POSG = i;
			if (solve(grid, NEXT, size))
				return (1);
		}
		++i;
	}
	if (piece->name > 'A')
		delete_piece(grid, PREV);
	return (0);
}
