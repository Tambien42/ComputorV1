/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:59:23 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 14:59:43 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks whether c fits into the ASCII character set.
*/

#include "../includes/libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
