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
