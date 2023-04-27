/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:55:52 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/26 17:59:57 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			how;
	char		*tarro;
	static char	*lba9i;

	tarro = ft_calloc_gnl(BUFFER_SIZE, 10);
	how = 1;
	if (lba9i)
	{
		tarro = ft_strjoin_gnl(tarro, lba9i);
		free(lba9i);
		lba9i = NULL;
	}
	tarro = reder(fd, tarro, &how);
	if (tarro && (position(tarro, '\n') != -1))
	{
		lba9i = ft_substr_gnl(tarro, (position(tarro, '\n') + 1), (position(tarro,
						'\0')));
		tarro = li_3jbek(tarro);
	}
	else if (how == 0 && ft_strlen_gnl(tarro) == 0)
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
	pointer = ft_substr_gnl(str, 0, (position(str, '\n') + 1));
	free(str);
	return (pointer);
}

char	*reder(int fd, char *tarro, int *how)
{
	char	*buff;

	buff = ft_calloc_gnl(BUFFER_SIZE, 10);
	while (position(buff, '\n') == -1 && *how > 0)
	{
		ft_bzero_gnl(buff, BUFFER_SIZE);
		*how = read(fd, buff, BUFFER_SIZE);
		if (*how == -1)
		{
			free(buff);
			free(tarro);
			return (NULL);
		}
		tarro = ft_strjoin_gnl(tarro, buff);
	}
	free(buff);
	return (tarro);
}

void	ft_bzero_gnl(void *s, size_t l)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < l)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("9alwa.txt", O_RDONLY);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// }
