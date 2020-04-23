/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:57:08 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/16 13:55:29 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int comp;

	i = 0;
	comp = 0;
	while (comp == 0 && ((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		comp = (s1[i] - s2[i]);
		i++;
	}
	return (comp);
}