/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:20:21 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/01 20:13:06 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	char	*bp;
	char	*lp;

	if (!*n)
		return ((char *)h);
	while (len-- && *h)
	{
		if (*h == *n)
		{
			i = len;
			bp = (char *)h + 1;
			lp = (char *)n + 1;
			while (i-- && *bp && *lp && *lp == *bp)
			{
				lp++;
				bp++;
			}
			if (*lp == '\0')
				return ((char *)h);
		}
		h++;
	}
	return (NULL);
}
