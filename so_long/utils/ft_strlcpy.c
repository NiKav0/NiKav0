/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:15:02 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:12:48 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)src;
	i = 0;
	if (dstsize > 0)
	{
		while (ptr[i] && i < (dstsize - 1))
		{
			dst[i] = ptr[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
