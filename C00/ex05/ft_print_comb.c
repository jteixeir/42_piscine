/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:46:50 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/07 12:52:11 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				write(1, &c, 1) && write(1, &d, 1) && write(1, &u, 1);
				if (c != '7')
					write(1, ", ", 2);
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}
