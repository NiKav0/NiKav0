/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:55:52 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/07 22:07:37 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*get_next_line(int fd)
{
	int			how;
	char		*tarro;
	static char	*lba9i;

	tarro = ft_callocgnl(BUFFER_SIZE, 10);
	how = 1;
	if (lba9i)
	{
		tarro = ft_strjoingnl(tarro, lba9i);
		free(lba9i);
		lba9i = NULL;
	}
	tarro = reder(fd, tarro, &how);
	if (tarro && (position(tarro, '\n') != -1))
	{
		lba9i = ft_substrgnl(tarro, (position(tarro, '\n') + 1),
				(position(tarro, '\0')));
		tarro = li_3jbek(tarro);
	}
	else if (how == 0 && ft_strlengnl(tarro) == 0)
	{
		free(tarro);
		return (NULL);
	}
	return (tarro);
}

char	*li_3jbek(char *str)
{
	char	*pointer;

	if (!str)
		return (NULL);
	pointer = ft_substrgnl(str, 0, (position(str, '\n') + 1));
	free(str);
	return (pointer);
}

char	*reder(int fd, char *tarro, int *how)
{
	char	*buff;

	buff = ft_callocgnl(BUFFER_SIZE, 10);
	while (position(buff, '\n') == -1 && *how > 0)
	{
		ft_bzerognl(buff, BUFFER_SIZE);
		*how = read(fd, buff, BUFFER_SIZE);
		if (*how == -1)
		{
			free(buff);
			free(tarro);
			return (NULL);
		}
		tarro = ft_strjoingnl(tarro, buff);
	}
	free(buff);
	return (tarro);
}

void	ft_bzerognl(void *s, int l)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < l)
	{
		str[i] = 0;
		i++;
	}
}
