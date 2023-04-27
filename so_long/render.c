/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:49:18 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/27 20:15:15 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void    init(t_li_3jbek *lounge)
{
    lounge->mlx = mlx_init();
    lounge->t_0 = "./textures/0.xpm";
    lounge->t_1 = "./textures/1.xpm";
    lounge->t_p = "./textures/p.xpm";
    lounge->t_e = "./textures/e.xpm";
    lounge->t_c = "./textures/c.xpm";
    
    lounge->i_0 = mlx_xpm_file_to_image(lounge->mlx, lounge->t_0, &lounge->img_width, &lounge->img_height);
    lounge->i_1 = mlx_xpm_file_to_image(lounge->mlx, lounge->t_1, &lounge->img_width, &lounge->img_height);
    lounge->i_p = mlx_xpm_file_to_image(lounge->mlx, lounge->t_p, &lounge->img_width, &lounge->img_height);
    lounge->i_e = mlx_xpm_file_to_image(lounge->mlx, lounge->t_e, &lounge->img_width, &lounge->img_height);
    lounge->i_c = mlx_xpm_file_to_image(lounge->mlx, lounge->t_c, &lounge->img_width, &lounge->img_height);


}

void    drawing(t_li_3jbek *lounge)
{
    init(lounge);
    lounge->win = mlx_new_window(lounge->mlx, lounge->h_ster * 32, lounge->v_ster *32, "so_long");
    actualdraw(lounge);
    mlx_loop(lounge->mlx);
}
void actualdraw(t_li_3jbek *lounge){



    int j =0;
    int i = 0;
    while (j < lounge->v_ster)
    {
        while (i < lounge->h_ster)
        {
            if (lounge->mappin[j][i] == '0' || lounge->mappin[j][i] == 'E' || lounge->mappin[j][i] == 'P' || lounge->mappin[j][i] == 'C')
            mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_0, i * 32, j *32);
            if (lounge->mappin[j][i] == '1')
            mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_1, i * 32, j *32);
            if (lounge->mappin[j][i] == 'P')
            mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_p, i * 32, j *32);
            if (lounge->mappin[j][i] == 'E')
            mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_e, i * 32, j *32);
            if (lounge->mappin[j][i] == 'C')
            mlx_put_image_to_window(lounge->mlx, lounge->win, lounge->i_c, i * 32, j *32);
            i++;
        }
        i=0;
        j++;
    }
    
}