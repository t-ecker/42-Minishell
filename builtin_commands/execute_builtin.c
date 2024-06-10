/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_builtin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:59:59 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/10 17:16:39 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_execute_builtin(t_shell *ms)
{
	if (strcmp(ms->ast->args[0], "exit") == 0)
		ft_exit(ms);
	else if (strcmp(ms->ast->args[0], "cd") == 0)
		ch_dir(ms->ast->args[1]);
	else if (strcmp(ms->ast->args[0], "pwd") == 0)
		ft_pwd();
	else if (strcmp(ms->ast->args[0], "echo") == 0)
		ft_echo(ms->ast->args);
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
	// else if (strcmp(arguments[0], "exit") == 0)
}
