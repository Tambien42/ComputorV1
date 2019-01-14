/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:57:20 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 14:58:03 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks for an alphanumeric character.
*/

#include "../includes/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	else
		return (0);
}
