/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:00:44 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:01:29 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if c in uppercase.
*/

#include "../includes/libft.h"

int	ft_is_uppercase(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}
