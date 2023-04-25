/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:35:07 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/13 09:44:32 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

char	convert(char *arr);
void	sig(int signal, siginfo_t *infos, void *ptr);
void	translate(char *string, int pid);
void	sender(int pid, int *k, char *str);

#endif
