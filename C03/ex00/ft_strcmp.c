/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:18:04 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/17 12:14:11 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	int compare;

	count = 0;
	compare = 0;
	while (compare == 0 && ((s1[count] != '\0') || (s2[count] != '\0')))
	{
		compare = (s1[count] - s2[count]);
		count++;
	}
	return (compare);
}
