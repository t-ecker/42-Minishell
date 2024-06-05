/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:07 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/05 17:08:34 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishell.h"

void	leaks(void)
{
	system("leaks minishell");
}

int	main(void)
{
	char	*input;
	char	*prompt;

	atexit(leaks);
	while (1)
	{
		prompt = get_prompt();
		input = readline(prompt);
		ft_execute(input);
		free(prompt);
	}
}
