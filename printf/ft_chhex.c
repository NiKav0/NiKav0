/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:12:11 by calmouht          #+#    #+#             */
/*   Updated: 2022/11/12 20:22:44 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chhex(unsigned int s, int isupper)
{
	char	*c;
	int		count;

	count = 0;
	if (isupper)
		c = "0123456789ABCDEF";
	else
		c = "0123456789abcdef";
	if (s < 16)
	{
		count += write(1, &c[s], 1);
	}
	else
	{
		count += ft_chhex(s / 16, isupper);
		count += ft_chhex(s % 16, isupper);
	}
	return (count);
}
