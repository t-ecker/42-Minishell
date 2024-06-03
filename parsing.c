/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:52:33 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/03 19:00:49 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	leaks(void)
{
	system("leaks minishell");
}

int	main(void)
{
	char	*input;
	char	*dir_name;
	char	*prompt;

	// atexit(leaks);
	while (1)
	{
		dir_name = getcwd(NULL, 0);
		prompt = ft_strjoin("\033[1;97mminishell\033[0;39m", dir_name);
		prompt = ft_strjoin(prompt, "\033[1;36m > \033[0;39m");
		// "\033[1;97mminishell > \033[0;39m"
		input = readline(prompt);
		if (ft_strstr(input, "exit"))
		{
			free(input);
			exit (0);
		}
	}
}
