/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:28:48 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/30 13:28:51 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_piece0(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 2;
	POS3 = 3;
	LOFF = 0;
	ROFF = size - 3;
	IMAX = size * size - POS3;
}

void	set_piece1(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = size;
	POS2 = 2 * size;
	POS3 = 3 * size;
	LOFF = 0;
	ROFF = size;
	IMAX = size * size - POS3;
}

void	set_piece2(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = size;
	POS2 = 2 * size;
	POS3 = 2 * size + 1;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece3(t_tetr *piece, int size)
{
	POS0 = 1;
	POS1 = 1 + size;
	POS2 = 2 * size;
	POS3 = 1 + 2 * size;
	LOFF = 1;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece4(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = size;
	POS3 = 2 * size;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}
