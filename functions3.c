/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:30:08 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/30 13:30:10 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_piece10(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = size;
	POS3 = 1 + size;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece11(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 2;
	POS3 = 1 + size;
	LOFF = 0;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece12(t_tetr *piece, int size)
{
	POS0 = 1;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 2 + size;
	LOFF = 1;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece13(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 2 * size;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece14(t_tetr *piece, int size)
{
	POS0 = 1;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 1 + 2 * size;
	LOFF = 1;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}
