/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:26:43 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/20 14:50:17 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *x)
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
		ft_rev_params(argv[argc - x]);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
