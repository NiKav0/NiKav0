/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:59:32 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:12:37 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		slen;
	int		i;

	slen = 0;
	while (s1[slen])
		slen++;
	dst = ((char *)malloc(sizeof(char) * (slen + 1)));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
