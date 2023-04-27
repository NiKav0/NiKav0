/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:55:55 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/26 20:34:38 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include "./libft/libft.h"
#include "./getnextline/get_next_line.h"
#include "./printf/ft_printf.h"
#include <fcntl.h>


typedef struct s_li_3jbek
{
    void    *mlx;
    void    *win;
    char    *t_0;
    char    *t_1;
    char    *t_p;
    char    *t_c;
    char    *t_e;
    void    *i_0;
    void    *i_1;
    void    *i_p;
    void    *i_c;
    void    *i_e;
    
    char **mappin;
    int h_ster;
    int v_ster;
    int count_p;
    int count_c;
    int count_e;
    int posx_p;
    int posy_p;
    int posx_e;
    int posy_e;
    int img_height;
    int img_width;
    
} t_li_3jbek ; 

void    map_rd(t_li_3jbek *lounge, int fd);
void    init(t_li_3jbek *lounge);
void    drawing(t_li_3jbek *lounge);
void actualdraw(t_li_3jbek *lounge);
void    rectangularity(t_li_3jbek *lounge);
void    map_check(t_li_3jbek *lounge);
void    element_check(t_li_3jbek *lounge);
void    errors(int code);
void    walls(t_li_3jbek *lounge);

#endif