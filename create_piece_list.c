/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:49:03 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/18 20:49:10 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_fct	function_factory(int i)
{
	t_fct	array[19];

	array[0] = &set_piece0;
	array[1] = &set_piece1;
	array[2] = &set_piece2;
	array[3] = &set_piece3;
	array[4] = &set_piece4;
	array[5] = &set_piece5;
	array[6] = &set_piece6;
	array[7] = &set_piece7;
	array[8] = &set_piece8;
	array[9] = &set_piece9;
	array[10] = &set_piece10;
	array[11] = &set_piece11;
	array[12] = &set_piece12;
	array[13] = &set_piece13;
	array[14] = &set_piece14;
	array[15] = &set_piece15;
	array[16] = &set_piece16;
	array[17] = &set_piece17;
	array[18] = &set_piece18;
	return (array[i]);
}

static t_tetr	*create_node(char name, int i)
{
	t_tetr	*new_tetr;

	if (!(new_tetr = (t_tetr*)malloc(sizeof(t_tetr))))
		return (0);
	new_tetr->type = i;
	new_tetr->name = name;
	new_tetr->next = 0;
	new_tetr->prev = 0;
	new_tetr->fct = function_factory(i);
	return (new_tetr);
}

void			list_add(t_tetr **list_start, char name, int i)
{
	t_tetr	*tmp;

	tmp = *list_start;
	if (*list_start)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = create_node(name, i);
		tmp->next->prev = tmp;
	}
	else
		*list_start = create_node(name, i);
}
