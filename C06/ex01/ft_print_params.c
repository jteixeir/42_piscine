/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:28:25 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/20 14:45:30 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *x)
{
	while (*x != '\0')
	{
		write(1, &*x, 1);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	while (x < argc)
	{
		ft_print_params(argv[x]);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
