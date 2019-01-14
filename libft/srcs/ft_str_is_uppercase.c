/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:10:52 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:11:20 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Finds if str is in uppercase.
*/

#include "../includes/libft.h"

int	ft_str_is_uppercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'A' && str[0] <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
