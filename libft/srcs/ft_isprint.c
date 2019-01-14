/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:01:12 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:01:33 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks for any printable character including space.
*/

#include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
