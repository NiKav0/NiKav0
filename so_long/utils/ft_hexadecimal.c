/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:42:12 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:11:40 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
