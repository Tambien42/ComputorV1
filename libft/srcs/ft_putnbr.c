/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:27:07 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:27:32 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the number n on stdout.
*/

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-');
	}
	else
		nb = n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
