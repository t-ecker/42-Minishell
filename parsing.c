/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:52:33 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/03 19:13:11 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	leaks(void)
{
	system("leaks minishell");
}

char	*get_prompt(void)
{
	char	*prompt;
	char	*dir_name;
	char	*prompt_no_arr;

	dir_name = getcwd(NULL, 0);
	prompt_no_arr = ft_strjoin("\033[1;97mminishell\033[0;39m", dir_name);
	prompt = ft_strjoin(prompt_no_arr, "\033[1;36m > \033[0;39m");
	free(prompt_no_arr);
	free(dir_name);
	return (prompt);
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
		if (ft_strstr(input, "exit"))
		{
			free(prompt);
			free(input);
			exit (0);
		}
	}
}
