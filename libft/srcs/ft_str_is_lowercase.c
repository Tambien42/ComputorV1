/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:09:43 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:10:21 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Finds if str is in lowercase.
*/

#include "../includes/libft.h"

int	ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'a' && str[0] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
