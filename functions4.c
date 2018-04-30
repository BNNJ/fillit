/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:30:47 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/30 13:30:48 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set_piece15(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = 1;
	POS2 = 1 + size;
	POS3 = 2 + size;
	LOFF = 0;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece16(t_tetr *piece, int size)
{
	POS0 = 1;
	POS1 = 2;
	POS2 = size;
	POS3 = 1 + size;
	LOFF = 1;
	ROFF = size - 2;
	IMAX = size * size - POS3;
}

void	set_piece17(t_tetr *piece, int size)
{
	POS0 = 0;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 1 + 2 * size;
	LOFF = 0;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}

void	set_piece18(t_tetr *piece, int size)
{
	POS0 = 1;
	POS1 = size;
	POS2 = 1 + size;
	POS3 = 2 * size;
	LOFF = 1;
	ROFF = size - 1;
	IMAX = size * size - POS3;
}
