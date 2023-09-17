/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:57:30 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:13:25 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_uputnbr(unsigned int i)
{
	int	count;

	count = 0;
	if (i >= 10)
	{
		count += ft_uputnbr(i / 10);
		i = i % 10;
	}
	if (i < 10)
		count += ft_putchar(i + 48);
	return (count);
}
