/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:44:15 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:44:38 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return the factorial of a number.
*/

#include "../includes/libft.h"

int	ft_factorial(int nb)
{
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_factorial(nb - 1));
}
