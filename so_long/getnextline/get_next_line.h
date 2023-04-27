/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:56:16 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/26 19:28:59 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5100

# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	*ft_calloc_gnl(size_t count, size_t size);
ssize_t	position(char *s, int c);
void	ft_bzero_gnl(void *s, size_t l);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_strlen_gnl(char *s);
char	*ft_substr_gnl(char *s, unsigned int start, size_t len);
char	*li_3jbek(char *str);
char	*reder(int fd, char *tarro, int *how);

#endif