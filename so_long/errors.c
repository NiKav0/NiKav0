/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:26:06 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/08 01:43:25 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	errors(int code)
{
	if (code == 0)
		ft_printf("ERROR: Missing some elementary stuff.\n");
	if (code == 1)
		ft_printf("ERROR: Map not rectangular.\n");
	if (code == 2)
		ft_printf("ERROR: Your wall is broken.\n");
	if (code == 3)
		ft_printf("ERROR: You map file doesn't have '.ber' extension\n");
	if (code == 4)
		ft_printf("ERROR: Sus element in your map file\n");
	if (code == 5)
		ft_printf("ERROR: Empty line in map file\n");
	exit(1);
}

void	la3ibfoglbab(t_li_3jbek *lounge)
{
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e,
		lounge->posx_e * 32, lounge->posy_e * 32);
	mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p,
		lounge->posx_e * 32, lounge->posy_e * 32);
}
