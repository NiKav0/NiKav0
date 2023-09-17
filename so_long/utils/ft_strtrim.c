/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:06:46 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 22:03:24 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t	s;
	size_t	e;
	size_t	i;

	if (!s1)
		return (0);
	i = 0;
	s = 0;
	e = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		s = (i++) + 1;
	if (s >= ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	i = ft_strlen(s1) - 1;
	while (i && s1[i] && ft_strchr(set, s1[i]))
		e = (i--) - 1;
	return (ft_substr(s1, s, (e - s + 1)));
}
