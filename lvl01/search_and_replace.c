/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medenis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:26:29 by medenis           #+#    #+#             */
/*   Updated: 2019/01/15 16:28:53 by medenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
		write (1, "\n", 1);
	else if (argc == 4)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		write (1, argv[1], i);
		write (1, "\n", 1);
	}
	return (0);
}
