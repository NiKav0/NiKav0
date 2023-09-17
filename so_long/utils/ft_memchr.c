/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:30:46 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:11:56 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ps == (unsigned char)c)
			return ((void *)ps);
		ps++;
		i++;
	}
	return (NULL);
}
