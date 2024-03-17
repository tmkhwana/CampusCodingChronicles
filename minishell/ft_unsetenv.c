/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:08:42 by pntsunts          #+#    #+#             */
/*   Updated: 2020/07/14 16:19:01 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static size_t envLe(char **Data)
{
	int x;

	x = 0;
	while (Data[x] != NULL)
	{
		x++;
	}
	return (x);
}

void env_cop(char **env)
{
	int x;

	x = 0;
	while (Data[x] != NULL)
	{
		env[x] = Data[x];
		x++;
	}
	env[x] = NULL;
}

void env_unset(char *str)
{
	char **store;
	char *tmp;
	int i = 0;

	store = (char **)malloc(sizeof(char *) * (envLe(Data) + 1));
	env_cop(store);
	free(Data);
	Data = NULL;
	Data = store;
	while (Data[i])
	{
		tmp = ft_strjoin(str, "=");
		if (compare(Data[i], tmp) == 1)
		{
			Data[envLe(Data) - 1] = NULL;
		}
		i++;
	}
}

int check(char **str)
{
	if (envLe(str) != 2)
	{
		ft_putendl("ft_unsetenv : \033[0mtoo few or many arguments\36m ");
		return (1);
	}
	env_unset(str[1]);
	return (0);
}
