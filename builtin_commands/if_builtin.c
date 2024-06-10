/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_builtin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:10:37 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/10 15:19:49 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	command_is_builtin(char **args)
{
	if (strcmp(args[0], "echo") == 0 || strcmp(args[0], "cd") == 0
		|| strcmp(args[0], "pwd") == 0 || strcmp(args[0], "export") == 0
		|| strcmp(args[0], "unset") == 0 || strcmp(args[0], "env") == 0
		|| strcmp(args[0], "exit") == 0)
		return (1);
	else
		return (0);
}
