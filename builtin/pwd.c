/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 08:53:58 by bolcay            #+#    #+#             */
/*   Updated: 2025/04/30 01:59:52 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	run_pwd(char **args, t_env *env)
{
	char	buf[BUFSIZ];
	char	*check;

	if (args[1] && args[1][0] && args[1][0] == '-')
	{
		write(2, "minishell: pwd: ", 16);
		write(2, args[1], ft_strlen(args[1]));
		write(2, ": invalid option\n", 17);
		printf("pwd: usage: pwd\n");
		env->exit_code = 1;
		return ;
	}
	check = getcwd(buf, BUFSIZ);
	if (!check)
	{
		perror("minishell: pwd");
		env->exit_code = 1;
		return ;
	}
	printf("%s\n", buf);
	env->exit_code = 0;
}
