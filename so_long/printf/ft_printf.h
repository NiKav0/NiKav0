/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:02:29 by calmouht          #+#    #+#             */
/*   Updated: 2022/11/12 20:22:15 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_uputnbr(unsigned int i);
int	ft_putnbr(int i);
int	ft_chhex(unsigned int s, int isupper);
int	ft_hexadecimal(unsigned long s);

#endif
