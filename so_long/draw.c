/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:42:43 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/08 00:04:32 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	rsemright(t_li_3jbek *lounge)
{
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		(lounge->posx_p + 1) * 32, lounge->posy_p * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p,
		(lounge->posx_p + 1) * 32, lounge->posy_p * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, lounge->posy_p * 32);
}

void	rsemleft(t_li_3jbek *lounge)
{
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		(lounge->posx_p - 1) * 32, lounge->posy_p * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p,
		(lounge->posx_p - 1) * 32, lounge->posy_p * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, lounge->posy_p * 32);
}

void	rsemlfoug(t_li_3jbek *lounge)
{
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, (lounge->posy_p - 1) * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p,
		lounge->posx_p * 32, (lounge->posy_p - 1) * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, lounge->posy_p * 32);
}

void	rsemlt7t(t_li_3jbek *lounge)
{
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, (lounge->posy_p + 1) * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p,
		lounge->posx_p * 32, (lounge->posy_p + 1) * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0,
		lounge->posx_p * 32, lounge->posy_p * 32);
}
