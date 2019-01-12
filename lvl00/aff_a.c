/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medenis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 18:19:47 by medenis           #+#    #+#             */
/*   Updated: 2019/01/12 18:56:10 by medenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argc != 2)
		write (1, "a", 1);
	else
	{
		while (*argv[1] && a == 0)
		{
			if (*argv[1] == 'a')
			{
				write (1, "a", 1);
				a++;
			}
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
