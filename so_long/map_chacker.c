/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_chacker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:12:00 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:39 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    rectangularity(t_li_3jbek *lounge)
{
    int i;
    i=0;
    while (lounge->mappin[i])
    {
        if ((int)ft_strlen_gnl(lounge->mappin[i]) != lounge->h_ster)
        errors(1);
        i++;
    }
    
}

void    element_check(t_li_3jbek *lounge)
{
    int j;
    int i;

    i = 0;
    j = 0;
    while (j < lounge->v_ster)
    {
        while (i < lounge->h_ster)
        {
            if (lounge->mappin[j][i] == 'P')
            {
                lounge->count_p++;
                lounge->posx_p = i;
                lounge->posy_p = j;
            }
            if (lounge->mappin[j][i] == 'E')
            {
                lounge->count_e++;
                lounge->posx_e = i;
                lounge->posy_e = j;
            }
            if (lounge->mappin[j][i] == 'C')
            lounge->count_c++;
            i++;
        }
        i=0;
        j++;
    } 
}

void    walls(t_li_3jbek *lounge)
{
    int j;
    int i;

    i = 0;
    j = 0;
    while (j < lounge->v_ster)
    {
        if (lounge->mappin[j][0] != '1')
            errors(2);
        if (lounge->mappin[j][lounge->h_ster-1] != '1')
        errors(2);
        while (i < lounge->h_ster)
        {
            if (lounge->mappin[0][i] != '1')
            errors(2);
            if (lounge->mappin[lounge->v_ster-1][i] != '1')
            errors(2);
            i++;
        }
        i = 0;
        j++;
    } 
}

void    map_check(t_li_3jbek *lounge)
{
    rectangularity(lounge);
    element_check(lounge);
    if (lounge->count_p != 1 || lounge->count_e != 1 || lounge->count_c == 0) // checkim3a krek wach kaynin ghir 10EpC
    errors(0);   
    walls(lounge);
}