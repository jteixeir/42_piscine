/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:33:13 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/08 08:46:25 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	converte(int x)
{
	char d;
	char u;

	d = (x / 10) + 48;
	u = (x % 10) + 48;
	write(1, &d, 1) && write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int x1;
	int x2;

	x1 = 0;
	while (x1 <= 98)
	{
		x2 = x1 + 1;
		while (x2 <= 99)
		{
			converte(x1);
			write(1, " ", 1);
			converte(x2);
			if (x1 != 98)
				write(1, ", ", 2);
			x2++;
		}
		x1++;
	}
}
