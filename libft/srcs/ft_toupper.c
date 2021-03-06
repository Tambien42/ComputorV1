/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:53:03 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 14:53:46 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts the letter c to upper case.
*/

#include "../includes/libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 'A' - 'a');
	else
		return (c);
}
