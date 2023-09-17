/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:48:30 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 21:40:57 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strchr(const char *s, int c)
{
	char	str;
	char	*alt;
	int		i;

	i = 0;
	alt = (char *)s;
	str = c;
	while (alt[i] != str)
	{
		if (alt[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)alt + i);
}
