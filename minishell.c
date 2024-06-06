/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:07 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/06 18:24:13 by dolifero         ###   ########.fr       */
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
	t_token	*token;
	t_token	*tmp;
	t_token	*tmp2;
	t_ast	*ast;

	// atexit(leaks);
	while (1)
	{
		prompt = get_prompt();
		input = readline(prompt);
		token = get_token(input);
		tmp = token;
		tmp2 = token;
		ast = parse(&token);
		print_token(tmp);
		printf("\n\n");
		print_ast(ast);
		evaluate_ast(ast);
		free_tokens(tmp2);
		free_ast(ast);
		free(prompt);
	}
}
