/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medenis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 13:31:19 by medenis           #+#    #+#             */
/*   Updated: 2019/01/16 13:31:45 by medenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					i++;
					k++;
					j = 0;
				}
				else if (argv[1][i] != argv[2][j])
					j++;
			}
		}
		if (ft_strlen(argv[1]) == k)
			write (1, argv[1], i);
	}
	write (1, "\n", 1);
	return (0);
}

