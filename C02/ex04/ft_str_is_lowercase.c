/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteixeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:10:42 by jteixeir          #+#    #+#             */
/*   Updated: 2019/10/14 16:24:53 by jteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
