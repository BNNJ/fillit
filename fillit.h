/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:24:57 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/08 17:24:59 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define POS0 piece->pos[0]
# define POS1 piece->pos[1]
# define POS2 piece->pos[2]
# define POS3 piece->pos[3]
# define IMAX piece->offset[0]
# define LOFF piece->offset[1]
# define ROFF piece->offset[2]
# define NAME piece->name
# define POSG piece->pos[4]
# define TYPE piece->type
# define NEXT piece->next
# define PREV piece->prev

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_tetr	t_tetr;

typedef void			(*t_fct)(t_tetr*, int);

struct					s_tetr
{
	char	name;
	t_tetr	*next;
	t_tetr	*prev;
	t_fct	fct;
	int		pos[5];
	int		offset[3];
	int		type;
};

int						read_file(char *file_name, t_tetr **list);
int						match_piece(t_tetr **list, char *str, char name);
void					list_add(t_tetr **list_start, char name, int i);
int						solve(char *grid, t_tetr *list, int size);

char					*create_grid(int size);
void					print_grid(char *grid, int offset);
int						min_grid_size(int pce_nbr);

void					set_piece0(t_tetr *piece, int size);
void					set_piece1(t_tetr *piece, int size);
void					set_piece2(t_tetr *piece, int size);
void					set_piece3(t_tetr *piece, int size);
void					set_piece4(t_tetr *piece, int size);
void					set_piece5(t_tetr *piece, int size);
void					set_piece6(t_tetr *piece, int size);
void					set_piece7(t_tetr *piece, int size);
void					set_piece8(t_tetr *piece, int size);
void					set_piece9(t_tetr *piece, int size);
void					set_piece10(t_tetr *piece, int size);
void					set_piece11(t_tetr *piece, int size);
void					set_piece12(t_tetr *piece, int size);
void					set_piece13(t_tetr *piece, int size);
void					set_piece14(t_tetr *piece, int size);
void					set_piece15(t_tetr *piece, int size);
void					set_piece16(t_tetr *piece, int size);
void					set_piece17(t_tetr *piece, int size);
void					set_piece18(t_tetr *piece, int size);

#endif
