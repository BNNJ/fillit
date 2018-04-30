/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 22:24:56 by pfragnou          #+#    #+#             */
/*   Updated: 2018/04/12 22:24:59 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	len = 0;
	while (s1[len])
		++len;
	if (!(dest = (char*)malloc(len + 1)))
		return (NULL);
	while (*s1)
		*dest++ = *s1++;
	*dest = '\0';
	return (dest - len);
}

static char	*get_ref_arr(int i)
{
	static char	*arr[19];

	arr[0] = ft_strdup("####");
	arr[1] = ft_strdup("#...#...#...#");
	arr[2] = ft_strdup("#...#...##");
	arr[3] = ft_strdup(".#...#..##");
	arr[4] = ft_strdup("##..#...#");
	arr[5] = ft_strdup("##...#...#");
	arr[6] = ft_strdup("###...#");
	arr[7] = ft_strdup("..#.###");
	arr[8] = ft_strdup("#...###");
	arr[9] = ft_strdup("###.#");
	arr[10] = ft_strdup("##..##");
	arr[11] = ft_strdup("###..#");
	arr[12] = ft_strdup(".#..###");
	arr[13] = ft_strdup("#...##..#");
	arr[14] = ft_strdup(".#..##...#");
	arr[15] = ft_strdup("##...##");
	arr[16] = ft_strdup(".##.##");
	arr[17] = ft_strdup("#...##...#");
	arr[18] = ft_strdup(".#..##..#");
	return (arr[i]);
}

static char	*rm_from_str(char *str, char c)
{
	int		len;
	char	*new_str;
	int		i;
	int		count;

	len = -1;
	i = 0;
	count = 0;
	while (str[++len])
		if (str[len] == c)
			++count;
	if (!(new_str = (char*)malloc(len - count + 1)))
		return (0);
	len = 0;
	while (str[len])
	{
		while (str[len] == c)
			++len;
		new_str[i++] = str[len++];
	}
	new_str[i] = '\0';
	return (new_str);
}

static int	match(char *piece, char *ref_piece)
{
	while (*ref_piece == '.')
		++ref_piece;
	while (*piece == '.')
		++piece;
	while (*piece && *ref_piece && *ref_piece == *piece)
	{
		++piece;
		++ref_piece;
	}
	return (*ref_piece == '\0');
}

int			match_piece(t_tetr **list, char *str, char name)
{
	char	*piece;
	int		i;

	i = 0;
	piece = rm_from_str(str, '\n');
	while (i <= 18)
	{
		if (match(piece, get_ref_arr(i)))
		{
			list_add(list, name, i);
			return (i);
		}
		++i;
	}
	return (-1);
}
