/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environmen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:59:42 by dolifero          #+#    #+#             */
/*   Updated: 2024/06/14 17:51:00 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	**env_init(char **input_env)
{
	int		i;
	int		count;
	char	**environment;

	count = 0;
	while (input_env[count] != NULL)
		count++;
	i = 0;
	environment = malloc((count + 1) * sizeof(char *));
	if (environment == NULL)
		return (NULL);
	while (input_env[i] != NULL)
	{
		environment[i] = ft_strdup(input_env[i]);
		if (environment[i] == NULL)
		{
			while (i > 0)
				free(environment[--i]);
			free(environment);
			return (NULL);
		}
		i++;
	}
	environment[i] = NULL;
	return (environment);
}

void	print_env(char **environment)
{
	int	i;

	i = 0;
	while (environment[i] != NULL)
	{
		ft_printf("%s\n", environment[i]);
		i++;
	}
}
