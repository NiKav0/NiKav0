/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:56:00 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/13 09:14:58 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int		g_pid;

char	convert(char *arr)
{
	int	tb;
	int	i;

	tb = 0;
	i = 0;
	while (i < 8)
	{
		tb = tb * 2 + arr[i];
		i++;
	}
	return (tb);
}

void	sig(int signal, siginfo_t *info, void *ptr)
{
	static int	d;
	static char	arr[8];
	char		r;

	(void)ptr;
	if (info->si_pid != g_pid)
	{
		ft_bzero(arr, 8);
		d = 0;
		g_pid = info->si_pid;
	}
	if (signal == SIGUSR1)
		arr[d++] = 0;
	if (signal == SIGUSR2)
		arr[d++] = 1;
	if (d == 8)
	{
		r = convert(arr);
		d = 0;
		ft_bzero(arr, 8);
		ft_putchar_fd(r, 1);
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	sa.sa_sigaction = sig;
	sa.sa_flags = SA_SIGINFO;
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
	{
	}
	return (0);
}
