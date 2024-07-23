/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymauk <ymauk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:02:21 by ymauk             #+#    #+#             */
/*   Updated: 2024/07/23 16:45:52 by ymauk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	split_path(t_vars *data, char **envp)
{
	int		i;
	int		j;

	data->split_path = ft_split(envp[4], ':');
	i = 0;
	while (data->split_path[i] != NULL)
	{
		j = 0;
		while (data->split_path[i][j] != '\0' &&
			data->split_path[i][j] != '\n')
			j++;
		data->split_path[i][j] = '/';
		data->split_path[i][j + 1] = '\0';
		i++;
	}
	data->split_path[0] = ft_substr(data->split_path[0], 5, 14);
	printf("%s\n", data->split_path[4]);
	printf("%s\n", data->split_path[1]);
	printf("%s\n", data->split_path[2]);
	printf("%s\n", data->split_path[3]);

}
