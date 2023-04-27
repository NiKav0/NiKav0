/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:26:06 by calmouht          #+#    #+#             */
/*   Updated: 2023/04/27 20:08:12 by calmouht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    errors(int code)
{
if(code == 0)
ft_printf("Missing or duplicated elementary stuff.\n");
if(code == 1)
ft_printf("ERROR: Map not rectangular.\n");
if(code == 2)
ft_printf("Your wall is broken.\n");
exit(1);
}
