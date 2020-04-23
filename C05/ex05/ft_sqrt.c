/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:54:54 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/21 10:54:56 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long first;
	long middle;
	long last;

	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	first = 0;
	last = nb;
	while (first <= last)
	{
		middle = (first + last) / 2;
		if (middle * middle == nb)
			return (middle);
		if (middle * middle < nb)
			first = middle + 1;
		else
			last = middle - 1;
	}
	return (0);
}
