/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:29:22 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/30 13:29:24 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_piece5(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 1 + size;
	POS3 = 1 + 2 * size;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece6(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 2;
	POS3 = 2 + size;
	LOFF = 0;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece7(t_tetr *piece, int size)
{
	POS0 = 2;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 2 + size;
	LOFF = 2;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece8(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 2 + size;
	LOFF = 0;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece9(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 2;
	POS3 = size;
	LOFF = 0;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}
