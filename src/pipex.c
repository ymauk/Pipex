/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymauk <ymauk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:33:32 by ymauk             #+#    #+#             */
/*   Updated: 2024/07/23 15:55:51 by ymauk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	t_vars	data;
	int		i;
	// int		f1;
	// int		f2;

	argv = NULL;
	argc = 0;
	i = 0;
	// f1 = open(argv[1], O_RDONLY);
	// f2 = open(argv[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	// if (f1 < 0 || f2 < 0)
	// 	return (-1);
	split_path(&data, envp);
	return (0);
}
