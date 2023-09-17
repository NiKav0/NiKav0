/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:35:22 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/07 22:46:15 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	up(int press, t_li_3jbek *lounge)
{
	if (press == 13 || press == 126)
	{
		if (lounge->mappin[lounge->posy_p - 1][lounge->posx_p] != '1')
		{
			if (lounge->mappin[lounge->posy_p - 1][lounge->posx_p] == 'C')
			{
				lounge->mappin[lounge->posy_p - 1][lounge->posx_p] = '0';
				lounge->count_c--;
			}
			rsemlfoug(lounge);
			lounge->posy_p--;
			if (lounge->mappin[lounge->posy_p][lounge->posx_p] == 'E')
			{
				la3ibfoglbab(lounge);
				if (lounge->count_c == 0)
					successs(lounge);
			}
			else
				mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e,
					lounge->posx_e * 32, lounge->posy_e * 32);
			lounge->khatawat++;
			ft_printf("Moves: %d \r", lounge->khatawat);
		}
	}
	return (0);
}

int	down(int press, t_li_3jbek *lounge)
{
	if (press == 1 || press == 125)
	{
		if (lounge->mappin[lounge->posy_p + 1][lounge->posx_p] != '1')
		{
			if (lounge->mappin[lounge->posy_p + 1][lounge->posx_p] == 'C')
			{
				lounge->mappin[lounge->posy_p + 1][lounge->posx_p] = '0';
				lounge->count_c--;
			}
			rsemlt7t(lounge);
			lounge->posy_p++;
			if (lounge->mappin[lounge->posy_p][lounge->posx_p] == 'E')
			{
				la3ibfoglbab(lounge);
				if (lounge->count_c == 0)
					successs(lounge);
			}
			else
				mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e,
					lounge->posx_e * 32, lounge->posy_e * 32);
			lounge->khatawat++;
			ft_printf("Moves: %d \r", lounge->khatawat);
		}
	}
	return (0);
}

int	left(int press, t_li_3jbek *lounge)
{
	if (press == 0 || press == 123)
	{
		if (lounge->mappin[lounge->posy_p][lounge->posx_p - 1] != '1')
		{
			if (lounge->mappin[lounge->posy_p][lounge->posx_p - 1] == 'C')
			{
				lounge->mappin[lounge->posy_p][lounge->posx_p - 1] = '0';
				lounge->count_c--;
			}
			rsemleft(lounge);
			lounge->posx_p--;
			if (lounge->mappin[lounge->posy_p][lounge->posx_p] == 'E')
			{
				la3ibfoglbab(lounge);
				if (lounge->count_c == 0)
					successs(lounge);
			}
			else
				mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e,
					lounge->posx_e * 32, lounge->posy_e * 32);
			lounge->khatawat++;
			ft_printf("Moves: %d \r", lounge->khatawat);
		}
	}
	return (0);
}

int	right(int press, t_li_3jbek *lounge)
{
	if (press == 2 || press == 124)
	{
		if (lounge->mappin[lounge->posy_p][lounge->posx_p + 1] != '1')
		{
			if (lounge->mappin[lounge->posy_p][lounge->posx_p + 1] == 'C')
			{
				lounge->mappin[lounge->posy_p][lounge->posx_p + 1] = '0';
				lounge->count_c--;
			}
			rsemright(lounge);
			lounge->posx_p++;
			if (lounge->mappin[lounge->posy_p][lounge->posx_p] == 'E')
			{
				la3ibfoglbab(lounge);
				if (lounge->count_c == 0)
					successs(lounge);
			}
			else
				mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e,
					lounge->posx_e * 32, lounge->posy_e * 32);
			lounge->khatawat++;
			ft_printf("Moves: %d \r", lounge->khatawat);
		}
	}
	return (0);
}

int	presse(int press, t_li_3jbek *lounge)
{
	up(press, lounge);
	down(press, lounge);
	left(press, lounge);
	right(press, lounge);
	if (press == 53)
		exit(1);
	return (0);
}
