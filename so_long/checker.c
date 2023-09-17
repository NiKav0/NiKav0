/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:12:00 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/07 22:05:33 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	rectangularity(t_li_3jbek *lounge)
{
	int	i;

	i = 0;
	while (lounge->mappin[i])
	{
		if ((int)ft_strlengnl(lounge->mappin[i]) != lounge->h_ster)
			errors(1);
		i++;
	}
	if (i != lounge->v_ster)
		errors(5);
}

void	element_check(t_li_3jbek *lounge)
{
	while (lounge->j < lounge->v_ster)
	{
		while (lounge->i < lounge->h_ster)
		{
			if (lounge->mappin[lounge->j][lounge->i] == 'P')
			{
				lounge->count_p++;
				lounge->posx_p = lounge->i;
				lounge->posy_p = lounge->j;
			}
			if (lounge->mappin[lounge->j][lounge->i] == 'E')
			{
				lounge->count_e++;
				lounge->posx_e = lounge->i;
				lounge->posy_e = lounge->j;
			}
			if (lounge->mappin[lounge->j][lounge->i] == 'C')
				lounge->count_c++;
			lounge->i++;
		}
		lounge->i = 0;
		lounge->j++;
	}
}

void	walls(t_li_3jbek *lounge)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < lounge->v_ster)
	{
		if (lounge->mappin[j][0] != '1')
			errors(2);
		if (lounge->mappin[j][lounge->h_ster - 1] != '1')
			errors(2);
		while (i < lounge->h_ster)
		{
			if (lounge->mappin[0][i] != '1')
				errors(2);
			if (lounge->mappin[lounge->v_ster - 1][i] != '1')
				errors(2);
			i++;
		}
		i = 0;
		j++;
	}
}

void	map_check(t_li_3jbek *lounge)
{
	rectangularity(lounge);
	element_check(lounge);
	if (lounge->count_p != 1 || lounge->count_e != 1 || lounge->count_c == 0)
		errors(0);
	walls(lounge);
	if (path(lounge) == 0)
		errors(0);
}

int	valid_elements(t_li_3jbek *lounge)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < lounge->v_ster)
	{
		while (i < lounge->h_ster)
		{
			if (lounge->mappin[j][i] != '0' && lounge->mappin[j][i] != '1'
				&& lounge->mappin[j][i] != 'P' && lounge->mappin[j][i] != 'E'
				&& lounge->mappin[j][i] != 'C')
				errors(4);
			i++;
		}
		j++;
	}
	return (1);
}
