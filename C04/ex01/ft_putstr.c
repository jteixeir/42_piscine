/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:41:57 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/09 18:38:59 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int strcounter;

	strcounter = 0;
	while (str[strcounter] != '\0')
	{
		write(1, &str[strcounter], 1);
		strcounter++;
	}
}
