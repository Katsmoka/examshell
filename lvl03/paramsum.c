/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medenis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 00:02:31 by medenis           #+#    #+#             */
/*   Updated: 2019/01/22 00:26:24 by medenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar( i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
}

int		main(int argc, char **argv)
{
	int i;

	argv[1] = "0";
	i = argc - 1;
	ft_putnbr(i);
	write (1, "\n", 1);
	return (0);
}
