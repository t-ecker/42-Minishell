/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_nest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:59:59 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/05 15:06:27 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_execute(char *input)
{
	if (ft_strstr(input, "exit"))
	{
		free(input);
		exit (0);
	}
	else
	{
		free(input);
		ft_printf("Error: command not found\n");
	}
}
