/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:08:38 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/27 20:01:33 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
    if (ac ==2)
    {
        t_li_3jbek *lounge;
        lounge = (t_li_3jbek*)malloc(sizeof(t_li_3jbek));
        ft_memset(lounge,0,sizeof(t_li_3jbek));
        int fd;
        fd = open(av[1] , O_RDONLY);
        map_rd(lounge, fd);
        map_check(lounge);
        drawing(lounge);
    }
}

void    map_rd(t_li_3jbek *lounge, int fd)
{
    char *line;
    char *long_line;
    
    long_line = ft_calloc(1, 1);
    line = get_next_line(fd);
    lounge->h_ster = ft_strlen_gnl(line) - 1;
    while(line)
    {
        long_line = ft_strjoin_gnl(long_line, line);
        lounge->v_ster++;
        free(line);
        line = get_next_line(fd);
    }
    lounge->mappin = ft_split(long_line, '\n');
    free(long_line);
}