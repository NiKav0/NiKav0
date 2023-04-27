/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:54:25 by calmouht          #+#    #+#             */
/*   Updated: 2022/11/12 20:26:15 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (*str)
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}
