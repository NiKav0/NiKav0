/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:12:11 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:11:38 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
