/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:41:32 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 22:02:34 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

unsigned int	ft_strlcat(char *dst, char *src, int dstsize)
{
	int				d;
	unsigned int	s;

	d = ft_strlen(dst);
	if (dstsize < d)
		return (ft_strlen(src) + dstsize);
	s = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (d < (dstsize - 1) && src[s] != '\0')
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	while (src[s] != '\0')
	{
		d++;
		s++;
	}
	return (d);
}
