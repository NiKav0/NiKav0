/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:56:03 by calmouht          #+#    #+#             */
/*   Updated: 2023/05/02 01:39:49 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_callocgnl(size_t count, int size)
{
	char	*dst;
	int		t;
	int		i;

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
	return (dst);
}

int	position(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strjoingnl(char *s1, char *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	r = ft_callocgnl(ft_strlengnl(s1) + ft_strlengnl(s2) + 1, 1);
	if (r == NULL)
		return (NULL);
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		r[i] = s2[j];
		i++;
		j++;
	}
	free(s1);
	return (r);
}

size_t	ft_strlengnl(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_substrgnl(char *s, unsigned int start, size_t len)
{
	size_t			b;
	char			*subs;
	unsigned int	test;

	if (!s)
	{
		return (0);
	}
	if (len > ft_strlengnl(s))
		len = ft_strlengnl(s);
	b = 0;
	test = ft_strlengnl(s);
	subs = malloc(len * sizeof(char) + 1);
	if (!subs)
		return (0);
	while (b < len && test >= start)
	{
		subs[b] = s[start];
		b++;
		start++;
	}
	subs[b] = '\0';
	return (subs);
}
