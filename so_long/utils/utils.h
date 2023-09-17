/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:31 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/08 02:22:55 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# define BUFFER_SIZE 5100

# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_bzero(void *s, int l);
void			ft_bzerognl(void *s, int l);

int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
size_t			ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t			ft_strlen(char *s);
size_t			ft_strlengnl(char *s);

int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char *str);
void			*ft_memchr(const void *s, int c, size_t n);
unsigned int	ft_strlcat(char *dst, char *src, int dstsize);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *h, const char *n, size_t len);
char			*ft_strchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_calloc(size_t count, int size);
void			*ft_callocgnl(size_t count, int size);

char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char *s, unsigned int start, size_t len);
char			*ft_substrgnl(char *s, unsigned int start, size_t len);

char			*ft_strtrim(char *s1, char *set);
char			*ft_strmapi(char *s, char (*f)(unsigned int, char));
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strjoingnl(char *s1, char *s2);

void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			**ft_split(char *s, char c);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
char			*ft_itoa(int n);
char			*ft_strdup(const char *s1);
char			*get_next_line(int fd);
int				position(char *s, int c);
char			*li_3jbek(char *str);
char			*reder(int fd, char *tarro, int *how);
int				ft_printf(const char *str, ...);
int				ft_putchar(int c);
int				ft_putstr(const char *str);
int				ft_uputnbr(unsigned int i);
int				ft_putnbr(int i);
int				ft_chhex(unsigned int s, int isupper);
int				ft_hexadecimal(unsigned long s);

#endif
