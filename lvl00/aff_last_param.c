/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medenis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:11:54 by medenis           #+#    #+#             */
/*   Updated: 2019/01/12 19:16:11 by medenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argv[1])
	{
		while (argv[argc - 1][i])
			i++;
		write (1, argv[argc - 1], i);
	}
	write (1, "\n", 1);
	return (0);
}
