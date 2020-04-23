/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:17:21 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/20 11:44:51 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *x)
{
	while (*x != '\0')
	{
		write(1, &*x, 1);
		x++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argv[argc = 0]);
	return (0);
}
