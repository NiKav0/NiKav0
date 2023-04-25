/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:42:12 by calmouht          #+#    #+#             */
/*   Updated: 2022/11/12 19:42:17 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long s)
{	
	char	*a;
	int		b;

	b = 0;
	a = "0123456789abcdef";
	if (s < 16)
	{
		b += write(1, &a[s], 1);
	}
	else
	{
		b += ft_hexadecimal(s / 16);
		b += ft_hexadecimal(s % 16);
	}
	return (b);
}
