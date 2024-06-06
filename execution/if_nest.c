/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_nest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:59:59 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/06 18:53:27 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_execute_command(char **arguments)
{
	if (strcmp(arguments[0], "exit") == 0)
		exit(1);
	else if (strcmp(arguments[0], "cd") == 0)
		ch_dir(arguments[1]);
	else if (strcmp(arguments[0], "pwd") == 0)
		ft_printf("%s\n", getcwd(NULL, 0));
	else if (strcmp(arguments[0], "echo") == 0)
		ft_echo(arguments);
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
}
