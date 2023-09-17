/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:10:12 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 22:06:25 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_calloc(size_t count, int size)
{
	char			*dst;
	unsigned int	t;
	unsigned int	i;

	t = count * size;
	dst = malloc(t);
	if (!dst)
		return (NULL);
	i = 0;
	while (t--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
