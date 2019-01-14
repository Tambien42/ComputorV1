/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:07:23 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:07:42 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ONLY FOR power > 0
** Return the number ** power
*/

#include "../includes/libft.h"

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb > 214783647)
		return (0);
	return (nb * (ft_power(nb, power - 1)));
}
