/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:55 by calmouht          #+#    #+#             */
/*   Updated: 2022/11/12 21:29:58 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	int		count;
	long	l;

	count = 0;
	l = i;
	if (l == -2147483648)
	{
		count = ft_putstr("-2147483648");
		return (count);
	}
	if (l < 0)
	{
		count += ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
	{
		count += ft_putnbr(l / 10);
		l = l % 10;
	}
	if (l < 10)
		count += ft_putchar(l + 48);
	return (count);
}
