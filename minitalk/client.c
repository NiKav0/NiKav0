/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:49:14 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/14 02:53:05 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	translate(char *string, int pid)
{
	int		i;
	int		j;
	int		k;
	char	str[8];

	i = 0;
	j = 0;
	k = 0;
	ft_bzero(str, 8);
	while (string[j] != '\0')
	{
		while (i < 8)
		{
			str[7 - i] = string[j] % 2;
			string[j] = string[j] / 2;
			i++;
		}
		sender(pid, &k, str);
		i = 0;
		j++;
	}
}

void	sender(int pid, int *k, char *str)
{
	while (*k < 8)
	{
		if (str[*k] == 0)
			kill(pid, SIGUSR1);
		if (str[*k] == 1)
			kill(pid, SIGUSR2);
		usleep(150);
		(*k)++;
	}
	*k = 0;
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3)
	{
		ft_putstr_fd("Make sure you entered exactly 3 arguments.", 1);
		return (1);
	}
	pid = ft_atoi(av[1]);
	if (pid <= 0)
	{
		ft_putstr_fd("Bruh did you just entered a negative PID number ?", 1);
		return (1);
	}
	translate(av[2], pid);
	return (0);
}
