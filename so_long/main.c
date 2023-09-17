/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:08:38 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/08 00:06:57 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_li_3jbek	*lounge;
	int			fd;

	if (ac == 2)
	{
		lounge = (t_li_3jbek *)malloc(sizeof(t_li_3jbek));
		ft_memset(lounge, 0, sizeof(t_li_3jbek));
		fd = open(av[1], O_RDONLY);
		if (!ft_strnstr(av[1], ".ber", ft_strlen(av[1])))
			errors(6);
		map_rd(lounge, fd);
		map_check(lounge);
		valid_elements(lounge);
		drawing(lounge);
	}
	else
		ft_printf("ERROR: You should have exactly 2 arguments\n");
}

void	map_rd(t_li_3jbek *lounge, int fd)
{
	char	*line;
	char	*long_line;

	long_line = ft_callocgnl(1, 1);
	line = get_next_line(fd);
	if (!line)
		errors(5);
	lounge->h_ster = ft_strlengnl(line) - 1;
	while (line)
	{
		long_line = ft_strjoingnl(long_line, line);
		lounge->v_ster++;
		free(line);
		line = get_next_line(fd);
	}
	lounge->mappin = ft_split(long_line, '\n');
	free(long_line);
}

void	successs(t_li_3jbek *lounge)
{
	ft_printf("GG WP!");
	freemapti(lounge);
	exit(0);
}
