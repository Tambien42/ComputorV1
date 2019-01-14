/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:23:51 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:24:06 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes a character specified by the argument char to stdout.
*/

#include "../includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
