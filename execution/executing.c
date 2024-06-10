/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:09:27 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/10 17:15:21 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	evaluate_ast(t_shell *ms)
{
	if (ms->ast->type == N_COMMAND)
		if (command_is_builtin(ms->ast->args))
			ft_execute_builtin(ms);
}
