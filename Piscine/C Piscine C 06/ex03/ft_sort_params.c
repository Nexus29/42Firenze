/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glancell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:46:59 by glancell          #+#    #+#             */
/*   Updated: 2024/11/07 21:47:01 by glancell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	argnum;
	int	count;
	int	index;
	int	smallest;

	count = argc - 1;
	while (count > 0 && count--)
	{
		argnum = 1;
		smallest = 1;
		while (argnum != (argc - 1) && argnum++)
		{
			index = 0;
			while (argv[argnum][index] == argv[smallest][index])
				index++;
			if (argv[argnum][index] < argv[smallest][index])
				smallest = argnum;
		}
		index = 0;
		while (argv[smallest][index])
			write(1, &argv[smallest][index++], 1);
		argv[smallest][0] = 127;
		write(1, "\n", 1);
	}
}
