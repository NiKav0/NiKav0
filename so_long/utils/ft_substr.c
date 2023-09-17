/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:06:13 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 21:20:38 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*tm;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (start > j)
	{
		start = j;
		len = 0;
	}
	else if (j < start + len)
		len = j - start;
	tm = ft_calloc(len + 1, sizeof(char));
	if (!tm)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		tm[i] = s[start + i];
		i++;
	}
	tm[i] = '\0';
	return (tm);
}
