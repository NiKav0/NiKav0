/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:36:20 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/08 01:55:38 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	path(t_li_3jbek *lounge)
{
	int		x;
	int		y;
	int		a;
	int		i;
	char	**visited;

	x = lounge->posx_p;
	y = lounge->posy_p;
	a = 0;
	i = 0;
	visited = malloc(lounge->v_ster * sizeof(char *));
	while (i < lounge->v_ster)
	{
		visited[i] = malloc(lounge->h_ster * sizeof(char));
		i++;
	}
	a = wasla(x, y, lounge, visited);
	freemapti_zwina(visited, lounge);
	return (a);
}

int	wasla(int x, int y, t_li_3jbek *lounge, char **visited)
{
	if ((lounge->mappin[y][x] == '0' || lounge->mappin[y][x] == 'C'
			|| lounge->mappin[y][x] == 'P' || lounge->mappin[y][x] == 'E')
		&& visited[y][x] != 'V')
	{
		visited[y][x] = 'V';
		if (lounge->mappin[y][x] == 'E' || lounge->mappin[y][x] == 'C')
		{
			lounge->mokafa2a++;
			if (lounge->mokafa2a == lounge->count_c + 1)
				return (1);
		}
		if (wasla(x, y - 1, lounge, visited) == 1)
			return (1);
		if (wasla(x, y + 1, lounge, visited) == 1)
			return (1);
		if (wasla(x - 1, y, lounge, visited) == 1)
			return (1);
		if (wasla(x + 1, y, lounge, visited) == 1)
			return (1);
	}
	return (0);
}

void	freemapti_zwina(char **madlina, t_li_3jbek *wailwail)
{
	int	i;

	i = 0;
	while (i < wailwail->v_ster)
	{
		free(madlina[i]);
		i++;
	}
	free(madlina);
}

void	freemapti(t_li_3jbek *lounge)
{
	int	i;

	i = 0;
	while (i < lounge->v_ster)
	{
		free(lounge->mappin[i]);
		i++;
	}
	free(lounge->mappin);
}
