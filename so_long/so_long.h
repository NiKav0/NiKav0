/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:06:07 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/07 22:40:08 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./utils/utils.h"
# include <fcntl.h>
# include <mlx.h>

typedef struct s_li_3jbek
{
	void	*mlx;
	void	*win;
	char	*t_0;
	char	*t_1;
	char	*t_p;
	char	*t_c;
	char	*t_e;
	void	*i_0;
	void	*i_1;
	void	*i_p;
	void	*i_c;
	void	*i_e;

	char	**mappin;
	int		h_ster;
	int		v_ster;
	int		count_p;
	int		count_c;
	int		count_e;
	int		posx_p;
	int		posy_p;
	int		posx_e;
	int		posy_e;
	int		khatawat;
	int		img_height;
	int		img_width;
	int		mokafa2a;
	int		i;
	int		j;
}			t_li_3jbek;

void		map_rd(t_li_3jbek *lounge, int fd);
void		init(t_li_3jbek *lounge);
void		drawing(t_li_3jbek *lounge);
void		actualdraw(t_li_3jbek *lounge);
void		rectangularity(t_li_3jbek *lounge);
void		map_check(t_li_3jbek *lounge);
void		element_check(t_li_3jbek *lounge);
void		errors(int code);
void		rsemleft(t_li_3jbek *lounge);
void		walls(t_li_3jbek *lounge);
int			presse(int press, t_li_3jbek *lounge);
void		la3ibfoglbab(t_li_3jbek *lounge);
void		freemapti(t_li_3jbek *lounge);
void		successs(t_li_3jbek *lounge);
void		freemapti_zwina(char **madlina, t_li_3jbek *wailwail);
int			path(t_li_3jbek *lounge);
void		rsemright(t_li_3jbek *lounge);
int			wasla(int x, int y, t_li_3jbek *lounge, char **visited);
int			up(int press, t_li_3jbek *lounge);
int			down(int press, t_li_3jbek *lounge);
int			left(int press, t_li_3jbek *lounge);
int			right(int press, t_li_3jbek *lounge);
int			valid_elements(t_li_3jbek *lounge);
void		pointur(int *i, int *j, t_li_3jbek *lounge);
void		rsemlfoug(t_li_3jbek *lounge);
void		rsemlt7t(t_li_3jbek *lounge);
int			quit(void);

#endif