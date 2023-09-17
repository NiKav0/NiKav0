/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:54:25 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:12:30 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
