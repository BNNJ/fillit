/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:37:39 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/10 15:37:43 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_piece(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 20)
	{
		if ((i + 1) % 5 != 0 && !(str[i] == '.' || str[i] == '#'))
			return (0);
		else if ((i + 1) % 5 == 0 && str[i] != '\n')
			return (0);
		if (str[i] == '#')
			++count;
		++i;
	}
	return (count == 4);
}

static int	get_piece(int fd, char name, t_tetr **list)
{
	char	*buffer;
	int		test;

	if (!(buffer = (char*)malloc(22)))
		return (-1);
	test = read(fd, buffer, 21);
	if (check_piece(buffer) && match_piece(list, buffer, name) >= 0)
	{
		free(buffer);
		if (test == 20)
			return (0);
		else if (test == 21 && buffer[20] == '\n')
			return (1);
		else
			return (-1);
	}
	else
	{
		free(buffer);
		return (-1);
	}
}

int			read_file(char *file_name, t_tetr **list)
{
	int		fd;
	int		check;
	char	name;

	check = 1;
	name = 'A';
	if ((fd = open(file_name, O_RDONLY)) < 0)
		return (-1);
	while (check == 1)
	{
		check = get_piece(fd, name, list);
		++name;
		if (check == -1)
			return (-1);
	}
	close(fd);
	return (name - 'A');
}
