/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:02:28 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 21:45:45 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_atoi(char *str)
{
	int	res;
	int	ichara;

	res = 0;
	ichara = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			ichara *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * ichara);
}
